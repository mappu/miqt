#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslServer>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimerEvent>
#include <qsslserver.h>
#include "gen_qsslserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QSslServer_sslErrors(intptr_t, QSslSocket*, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QSslServer_peerVerifyError(intptr_t, QSslSocket*, QSslError*);
void miqt_exec_callback_QSslServer_errorOccurred(intptr_t, QSslSocket*, int);
void miqt_exec_callback_QSslServer_preSharedKeyAuthenticationRequired(intptr_t, QSslSocket*, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QSslServer_alertSent(intptr_t, QSslSocket*, int, int, struct miqt_string);
void miqt_exec_callback_QSslServer_alertReceived(intptr_t, QSslSocket*, int, int, struct miqt_string);
void miqt_exec_callback_QSslServer_handshakeInterruptedOnError(intptr_t, QSslSocket*, QSslError*);
void miqt_exec_callback_QSslServer_startedEncryptionHandshake(intptr_t, QSslSocket*);
void miqt_exec_callback_QSslServer_incomingConnection(QSslServer*, intptr_t, intptr_t);
bool miqt_exec_callback_QSslServer_hasPendingConnections(const QSslServer*, intptr_t);
QTcpSocket* miqt_exec_callback_QSslServer_nextPendingConnection(QSslServer*, intptr_t);
bool miqt_exec_callback_QSslServer_event(QSslServer*, intptr_t, QEvent*);
bool miqt_exec_callback_QSslServer_eventFilter(QSslServer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSslServer_timerEvent(QSslServer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSslServer_childEvent(QSslServer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSslServer_customEvent(QSslServer*, intptr_t, QEvent*);
void miqt_exec_callback_QSslServer_connectNotify(QSslServer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSslServer_disconnectNotify(QSslServer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSslServer final : public QSslServer {
public:

	MiqtVirtualQSslServer(): QSslServer() {};
	MiqtVirtualQSslServer(QObject* parent): QSslServer(parent) {};

	virtual ~MiqtVirtualQSslServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__incomingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual void incomingConnection(qintptr socket) override {
		if (handle__incomingConnection == 0) {
			QSslServer::incomingConnection(socket);
			return;
		}
		
		qintptr socket_ret = socket;
		intptr_t sigval1 = (intptr_t)(socket_ret);

		miqt_exec_callback_QSslServer_incomingConnection(this, handle__incomingConnection, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_incomingConnection(intptr_t socket) {

		QSslServer::incomingConnection((qintptr)(socket));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasPendingConnections = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasPendingConnections() const override {
		if (handle__hasPendingConnections == 0) {
			return QSslServer::hasPendingConnections();
		}
		

		bool callback_return_value = miqt_exec_callback_QSslServer_hasPendingConnections(this, handle__hasPendingConnections);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_hasPendingConnections() const {

		return QSslServer::hasPendingConnections();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QTcpSocket* nextPendingConnection() override {
		if (handle__nextPendingConnection == 0) {
			return QSslServer::nextPendingConnection();
		}
		

		QTcpSocket* callback_return_value = miqt_exec_callback_QSslServer_nextPendingConnection(this, handle__nextPendingConnection);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QTcpSocket* virtualbase_nextPendingConnection() {

		return QSslServer::nextPendingConnection();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSslServer::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QSslServer_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* event) {

		return QSslServer::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSslServer::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QSslServer_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QSslServer::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSslServer::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QSslServer_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QSslServer::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSslServer::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QSslServer_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QSslServer::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSslServer::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QSslServer_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QSslServer::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSslServer::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSslServer_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QSslServer::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSslServer::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QSslServer_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QSslServer::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend void QSslServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket);
	friend QObject* QSslServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSslServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSslServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSslServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSslServer* QSslServer_new() {
	return new MiqtVirtualQSslServer();
}

QSslServer* QSslServer_new2(QObject* parent) {
	return new MiqtVirtualQSslServer(parent);
}

void QSslServer_virtbase(QSslServer* src, QTcpServer** outptr_QTcpServer) {
	*outptr_QTcpServer = static_cast<QTcpServer*>(src);
}

QMetaObject* QSslServer_metaObject(const QSslServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSslServer_metacast(QSslServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSslServer_tr(const char* s) {
	QString _ret = QSslServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslServer_setSslConfiguration(QSslServer* self, QSslConfiguration* sslConfiguration) {
	self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QSslServer_sslConfiguration(const QSslServer* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslServer_setHandshakeTimeout(QSslServer* self, int timeout) {
	self->setHandshakeTimeout(static_cast<int>(timeout));
}

int QSslServer_handshakeTimeout(const QSslServer* self) {
	return self->handshakeTimeout();
}

void QSslServer_sslErrors(QSslServer* self, QSslSocket* socket, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(socket, errors_QList);
}

void QSslServer_connect_sslErrors(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, const QList<QSslError>&)>(&QSslServer::sslErrors), self, [=](QSslSocket* socket, const QList<QSslError>& errors) {
		QSslSocket* sigval1 = socket;
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval2 = errors_out;
		miqt_exec_callback_QSslServer_sslErrors(slot, sigval1, sigval2);
	});
}

void QSslServer_peerVerifyError(QSslServer* self, QSslSocket* socket, QSslError* error) {
	self->peerVerifyError(socket, *error);
}

void QSslServer_connect_peerVerifyError(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, const QSslError&)>(&QSslServer::peerVerifyError), self, [=](QSslSocket* socket, const QSslError& error) {
		QSslSocket* sigval1 = socket;
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval2 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslServer_peerVerifyError(slot, sigval1, sigval2);
	});
}

void QSslServer_errorOccurred(QSslServer* self, QSslSocket* socket, int error) {
	self->errorOccurred(socket, static_cast<QAbstractSocket::SocketError>(error));
}

void QSslServer_connect_errorOccurred(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QAbstractSocket::SocketError)>(&QSslServer::errorOccurred), self, [=](QSslSocket* socket, QAbstractSocket::SocketError error) {
		QSslSocket* sigval1 = socket;
		QAbstractSocket::SocketError error_ret = error;
		int sigval2 = static_cast<int>(error_ret);
		miqt_exec_callback_QSslServer_errorOccurred(slot, sigval1, sigval2);
	});
}

void QSslServer_preSharedKeyAuthenticationRequired(QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(socket, authenticator);
}

void QSslServer_connect_preSharedKeyAuthenticationRequired(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QSslPreSharedKeyAuthenticator*)>(&QSslServer::preSharedKeyAuthenticationRequired), self, [=](QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator) {
		QSslSocket* sigval1 = socket;
		QSslPreSharedKeyAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QSslServer_preSharedKeyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

void QSslServer_alertSent(QSslServer* self, QSslSocket* socket, int level, int type, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertSent(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(type), description_QString);
}

void QSslServer_connect_alertSent(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslServer::alertSent), self, [=](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType type, const QString& description) {
		QSslSocket* sigval1 = socket;
		QSsl::AlertLevel level_ret = level;
		int sigval2 = static_cast<int>(level_ret);
		QSsl::AlertType type_ret = type;
		int sigval3 = static_cast<int>(type_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval4 = description_ms;
		miqt_exec_callback_QSslServer_alertSent(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QSslServer_alertReceived(QSslServer* self, QSslSocket* socket, int level, int type, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertReceived(socket, static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(type), description_QString);
}

void QSslServer_connect_alertReceived(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QSslServer::alertReceived), self, [=](QSslSocket* socket, QSsl::AlertLevel level, QSsl::AlertType type, const QString& description) {
		QSslSocket* sigval1 = socket;
		QSsl::AlertLevel level_ret = level;
		int sigval2 = static_cast<int>(level_ret);
		QSsl::AlertType type_ret = type;
		int sigval3 = static_cast<int>(type_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval4 = description_ms;
		miqt_exec_callback_QSslServer_alertReceived(slot, sigval1, sigval2, sigval3, sigval4);
	});
}

void QSslServer_handshakeInterruptedOnError(QSslServer* self, QSslSocket* socket, QSslError* error) {
	self->handshakeInterruptedOnError(socket, *error);
}

void QSslServer_connect_handshakeInterruptedOnError(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*, const QSslError&)>(&QSslServer::handshakeInterruptedOnError), self, [=](QSslSocket* socket, const QSslError& error) {
		QSslSocket* sigval1 = socket;
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval2 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslServer_handshakeInterruptedOnError(slot, sigval1, sigval2);
	});
}

void QSslServer_startedEncryptionHandshake(QSslServer* self, QSslSocket* socket) {
	self->startedEncryptionHandshake(socket);
}

void QSslServer_connect_startedEncryptionHandshake(QSslServer* self, intptr_t slot) {
	MiqtVirtualQSslServer::connect(self, static_cast<void (QSslServer::*)(QSslSocket*)>(&QSslServer::startedEncryptionHandshake), self, [=](QSslSocket* socket) {
		QSslSocket* sigval1 = socket;
		miqt_exec_callback_QSslServer_startedEncryptionHandshake(slot, sigval1);
	});
}

struct miqt_string QSslServer_tr2(const char* s, const char* c) {
	QString _ret = QSslServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslServer_tr3(const char* s, const char* c, int n) {
	QString _ret = QSslServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSslServer_override_virtual_incomingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__incomingConnection = slot;
	return true;
}

void QSslServer_virtualbase_incomingConnection(void* self, intptr_t socket) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_incomingConnection(socket);
}

bool QSslServer_override_virtual_hasPendingConnections(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__hasPendingConnections = slot;
	return true;
}

bool QSslServer_virtualbase_hasPendingConnections(const void* self) {
	return ( (const MiqtVirtualQSslServer*)(self) )->virtualbase_hasPendingConnections();
}

bool QSslServer_override_virtual_nextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__nextPendingConnection = slot;
	return true;
}

QTcpSocket* QSslServer_virtualbase_nextPendingConnection(void* self) {
	return ( (MiqtVirtualQSslServer*)(self) )->virtualbase_nextPendingConnection();
}

bool QSslServer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QSslServer_virtualbase_event(void* self, QEvent* event) {
	return ( (MiqtVirtualQSslServer*)(self) )->virtualbase_event(event);
}

bool QSslServer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSslServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQSslServer*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QSslServer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QSslServer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_timerEvent(event);
}

bool QSslServer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QSslServer_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_childEvent(event);
}

bool QSslServer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QSslServer_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_customEvent(event);
}

bool QSslServer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QSslServer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_connectNotify(signal);
}

bool QSslServer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSslServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQSslServer*)(self) )->virtualbase_disconnectNotify(signal);
}

void QSslServer_protectedbase_addPendingConnection(bool* _dynamic_cast_ok, void* self, QTcpSocket* socket) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}
	
	*_dynamic_cast_ok = true;
	
	self_cast->addPendingConnection(socket);

}

QObject* QSslServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QSslServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QSslServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QSslServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSslServer* self_cast = dynamic_cast<MiqtVirtualQSslServer*>( (QSslServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QSslServer_delete(QSslServer* self) {
	delete self;
}

