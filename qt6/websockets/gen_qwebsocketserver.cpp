#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QUrl>
#include <QWebSocket>
#include <QWebSocketCorsAuthenticator>
#include <QWebSocketServer>
#include <qwebsocketserver.h>
#include "gen_qwebsocketserver.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebSocketServer_acceptError(intptr_t, int);
void miqt_exec_callback_QWebSocketServer_serverError(intptr_t, int);
void miqt_exec_callback_QWebSocketServer_originAuthenticationRequired(intptr_t, QWebSocketCorsAuthenticator*);
void miqt_exec_callback_QWebSocketServer_newConnection(intptr_t);
void miqt_exec_callback_QWebSocketServer_peerVerifyError(intptr_t, QSslError*);
void miqt_exec_callback_QWebSocketServer_sslErrors(intptr_t, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QWebSocketServer_preSharedKeyAuthenticationRequired(intptr_t, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QWebSocketServer_alertSent(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QWebSocketServer_alertReceived(intptr_t, int, int, struct miqt_string);
void miqt_exec_callback_QWebSocketServer_handshakeInterruptedOnError(intptr_t, QSslError*);
void miqt_exec_callback_QWebSocketServer_closed(intptr_t);
QWebSocket* miqt_exec_callback_QWebSocketServer_nextPendingConnection(QWebSocketServer*, intptr_t);
bool miqt_exec_callback_QWebSocketServer_event(QWebSocketServer*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebSocketServer_eventFilter(QWebSocketServer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebSocketServer_timerEvent(QWebSocketServer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebSocketServer_childEvent(QWebSocketServer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebSocketServer_customEvent(QWebSocketServer*, intptr_t, QEvent*);
void miqt_exec_callback_QWebSocketServer_connectNotify(QWebSocketServer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebSocketServer_disconnectNotify(QWebSocketServer*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebSocketServer final : public QWebSocketServer {
public:

	MiqtVirtualQWebSocketServer(const QString& serverName, QWebSocketServer::SslMode secureMode): QWebSocketServer(serverName, secureMode) {}
	MiqtVirtualQWebSocketServer(const QString& serverName, QWebSocketServer::SslMode secureMode, QObject* parent): QWebSocketServer(serverName, secureMode, parent) {}

	virtual ~MiqtVirtualQWebSocketServer() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nextPendingConnection = 0;

	// Subclass to allow providing a Go implementation
	virtual QWebSocket* nextPendingConnection() override {
		if (handle__nextPendingConnection == 0) {
			return QWebSocketServer::nextPendingConnection();
		}

		QWebSocket* callback_return_value = miqt_exec_callback_QWebSocketServer_nextPendingConnection(this, handle__nextPendingConnection);
		return callback_return_value;
	}

	friend QWebSocket* QWebSocketServer_virtualbase_nextPendingConnection(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QWebSocketServer::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWebSocketServer_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QWebSocketServer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QWebSocketServer::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWebSocketServer_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWebSocketServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QWebSocketServer::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWebSocketServer_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QWebSocketServer_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QWebSocketServer::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWebSocketServer_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QWebSocketServer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QWebSocketServer::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebSocketServer_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QWebSocketServer_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QWebSocketServer::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebSocketServer_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QWebSocketServer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QWebSocketServer::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebSocketServer_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QWebSocketServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QWebSocketServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebSocketServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebSocketServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebSocketServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebSocketServer* QWebSocketServer_new(struct miqt_string serverName, int secureMode) {
	QString serverName_QString = QString::fromUtf8(serverName.data, serverName.len);
	return new (std::nothrow) MiqtVirtualQWebSocketServer(serverName_QString, static_cast<QWebSocketServer::SslMode>(secureMode));
}

QWebSocketServer* QWebSocketServer_new2(struct miqt_string serverName, int secureMode, QObject* parent) {
	QString serverName_QString = QString::fromUtf8(serverName.data, serverName.len);
	return new (std::nothrow) MiqtVirtualQWebSocketServer(serverName_QString, static_cast<QWebSocketServer::SslMode>(secureMode), parent);
}

void QWebSocketServer_virtbase(QWebSocketServer* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebSocketServer_metaObject(const QWebSocketServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebSocketServer_metacast(QWebSocketServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebSocketServer_tr(const char* s) {
	QString _ret = QWebSocketServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebSocketServer_listen(QWebSocketServer* self) {
	return self->listen();
}

void QWebSocketServer_close(QWebSocketServer* self) {
	self->close();
}

bool QWebSocketServer_isListening(const QWebSocketServer* self) {
	return self->isListening();
}

void QWebSocketServer_setMaxPendingConnections(QWebSocketServer* self, int numConnections) {
	self->setMaxPendingConnections(static_cast<int>(numConnections));
}

int QWebSocketServer_maxPendingConnections(const QWebSocketServer* self) {
	return self->maxPendingConnections();
}

void QWebSocketServer_setHandshakeTimeoutWithMsec(QWebSocketServer* self, int msec) {
	self->setHandshakeTimeout(static_cast<int>(msec));
}

int QWebSocketServer_handshakeTimeoutMS(const QWebSocketServer* self) {
	return self->handshakeTimeoutMS();
}

unsigned short QWebSocketServer_serverPort(const QWebSocketServer* self) {
	quint16 _ret = self->serverPort();
	return static_cast<unsigned short>(_ret);
}

QHostAddress* QWebSocketServer_serverAddress(const QWebSocketServer* self) {
	return new QHostAddress(self->serverAddress());
}

QUrl* QWebSocketServer_serverUrl(const QWebSocketServer* self) {
	return new QUrl(self->serverUrl());
}

int QWebSocketServer_secureMode(const QWebSocketServer* self) {
	QWebSocketServer::SslMode _ret = self->secureMode();
	return static_cast<int>(_ret);
}

bool QWebSocketServer_setSocketDescriptor(QWebSocketServer* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

intptr_t QWebSocketServer_socketDescriptor(const QWebSocketServer* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

bool QWebSocketServer_setNativeDescriptor(QWebSocketServer* self, intptr_t descriptor) {
	return self->setNativeDescriptor((qintptr)(descriptor));
}

intptr_t QWebSocketServer_nativeDescriptor(const QWebSocketServer* self) {
	qintptr _ret = self->nativeDescriptor();
	return (intptr_t)(_ret);
}

bool QWebSocketServer_hasPendingConnections(const QWebSocketServer* self) {
	return self->hasPendingConnections();
}

QWebSocket* QWebSocketServer_nextPendingConnection(QWebSocketServer* self) {
	return self->nextPendingConnection();
}

int QWebSocketServer_error(const QWebSocketServer* self) {
	QWebSocketProtocol::CloseCode _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QWebSocketServer_errorString(const QWebSocketServer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSocketServer_pauseAccepting(QWebSocketServer* self) {
	self->pauseAccepting();
}

void QWebSocketServer_resumeAccepting(QWebSocketServer* self) {
	self->resumeAccepting();
}

void QWebSocketServer_setServerName(QWebSocketServer* self, struct miqt_string serverName) {
	QString serverName_QString = QString::fromUtf8(serverName.data, serverName.len);
	self->setServerName(serverName_QString);
}

struct miqt_string QWebSocketServer_serverName(const QWebSocketServer* self) {
	QString _ret = self->serverName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSocketServer_setSupportedSubprotocols(QWebSocketServer* self, struct miqt_array /* of struct miqt_string */  protocols) {
	QStringList protocols_QList;
	protocols_QList.reserve(protocols.len);
	struct miqt_string* protocols_arr = static_cast<struct miqt_string*>(protocols.data);
	for(size_t i = 0; i < protocols.len; ++i) {
		QString protocols_arr_i_QString = QString::fromUtf8(protocols_arr[i].data, protocols_arr[i].len);
		protocols_QList.push_back(protocols_arr_i_QString);
	}
	self->setSupportedSubprotocols(protocols_QList);
}

struct miqt_array /* of struct miqt_string */  QWebSocketServer_supportedSubprotocols(const QWebSocketServer* self) {
	QStringList _ret = self->supportedSubprotocols();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebSocketServer_setProxy(QWebSocketServer* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QWebSocketServer_proxy(const QWebSocketServer* self) {
	return new QNetworkProxy(self->proxy());
}

void QWebSocketServer_setSslConfiguration(QWebSocketServer* self, QSslConfiguration* sslConfiguration) {
	self->setSslConfiguration(*sslConfiguration);
}

QSslConfiguration* QWebSocketServer_sslConfiguration(const QWebSocketServer* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

struct miqt_array /* of int */  QWebSocketServer_supportedVersions(const QWebSocketServer* self) {
	QList<QWebSocketProtocol::Version> _ret = self->supportedVersions();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QWebSocketProtocol::Version _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QWebSocketServer_handleConnection(const QWebSocketServer* self, QTcpSocket* socket) {
	self->handleConnection(socket);
}

void QWebSocketServer_acceptError(QWebSocketServer* self, int socketError) {
	self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QWebSocketServer_connect_acceptError(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(QAbstractSocket::SocketError)>(&QWebSocketServer::acceptError), self, [=](QAbstractSocket::SocketError socketError) {
		QAbstractSocket::SocketError socketError_ret = socketError;
		int sigval1 = static_cast<int>(socketError_ret);
		miqt_exec_callback_QWebSocketServer_acceptError(slot, sigval1);
	});
}

void QWebSocketServer_serverError(QWebSocketServer* self, int closeCode) {
	self->serverError(static_cast<QWebSocketProtocol::CloseCode>(closeCode));
}

void QWebSocketServer_connect_serverError(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(QWebSocketProtocol::CloseCode)>(&QWebSocketServer::serverError), self, [=](QWebSocketProtocol::CloseCode closeCode) {
		QWebSocketProtocol::CloseCode closeCode_ret = closeCode;
		int sigval1 = static_cast<int>(closeCode_ret);
		miqt_exec_callback_QWebSocketServer_serverError(slot, sigval1);
	});
}

void QWebSocketServer_originAuthenticationRequired(QWebSocketServer* self, QWebSocketCorsAuthenticator* pAuthenticator) {
	self->originAuthenticationRequired(pAuthenticator);
}

void QWebSocketServer_connect_originAuthenticationRequired(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(QWebSocketCorsAuthenticator*)>(&QWebSocketServer::originAuthenticationRequired), self, [=](QWebSocketCorsAuthenticator* pAuthenticator) {
		QWebSocketCorsAuthenticator* sigval1 = pAuthenticator;
		miqt_exec_callback_QWebSocketServer_originAuthenticationRequired(slot, sigval1);
	});
}

void QWebSocketServer_newConnection(QWebSocketServer* self) {
	self->newConnection();
}

void QWebSocketServer_connect_newConnection(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)()>(&QWebSocketServer::newConnection), self, [=]() {
		miqt_exec_callback_QWebSocketServer_newConnection(slot);
	});
}

void QWebSocketServer_peerVerifyError(QWebSocketServer* self, QSslError* error) {
	self->peerVerifyError(*error);
}

void QWebSocketServer_connect_peerVerifyError(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(const QSslError&)>(&QWebSocketServer::peerVerifyError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QWebSocketServer_peerVerifyError(slot, sigval1);
	});
}

void QWebSocketServer_sslErrors(QWebSocketServer* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(errors_QList);
}

void QWebSocketServer_connect_sslErrors(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(const QList<QSslError>&)>(&QWebSocketServer::sslErrors), self, [=](const QList<QSslError>& errors) {
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval1 = errors_out;
		miqt_exec_callback_QWebSocketServer_sslErrors(slot, sigval1);
	});
}

void QWebSocketServer_preSharedKeyAuthenticationRequired(QWebSocketServer* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QWebSocketServer_connect_preSharedKeyAuthenticationRequired(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(QSslPreSharedKeyAuthenticator*)>(&QWebSocketServer::preSharedKeyAuthenticationRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QWebSocketServer_preSharedKeyAuthenticationRequired(slot, sigval1);
	});
}

void QWebSocketServer_alertSent(QWebSocketServer* self, int level, int type, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertSent(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(type), description_QString);
}

void QWebSocketServer_connect_alertSent(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QWebSocketServer::alertSent), self, [=](QSsl::AlertLevel level, QSsl::AlertType type, const QString& description) {
		QSsl::AlertLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		QSsl::AlertType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval3 = description_ms;
		miqt_exec_callback_QWebSocketServer_alertSent(slot, sigval1, sigval2, sigval3);
	});
}

void QWebSocketServer_alertReceived(QWebSocketServer* self, int level, int type, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->alertReceived(static_cast<QSsl::AlertLevel>(level), static_cast<QSsl::AlertType>(type), description_QString);
}

void QWebSocketServer_connect_alertReceived(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(QSsl::AlertLevel, QSsl::AlertType, const QString&)>(&QWebSocketServer::alertReceived), self, [=](QSsl::AlertLevel level, QSsl::AlertType type, const QString& description) {
		QSsl::AlertLevel level_ret = level;
		int sigval1 = static_cast<int>(level_ret);
		QSsl::AlertType type_ret = type;
		int sigval2 = static_cast<int>(type_ret);
		const QString description_ret = description;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray description_b = description_ret.toUtf8();
		struct miqt_string description_ms;
		description_ms.len = description_b.length();
		description_ms.data = static_cast<char*>(malloc(description_ms.len));
		memcpy(description_ms.data, description_b.data(), description_ms.len);
		struct miqt_string sigval3 = description_ms;
		miqt_exec_callback_QWebSocketServer_alertReceived(slot, sigval1, sigval2, sigval3);
	});
}

void QWebSocketServer_handshakeInterruptedOnError(QWebSocketServer* self, QSslError* error) {
	self->handshakeInterruptedOnError(*error);
}

void QWebSocketServer_connect_handshakeInterruptedOnError(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)(const QSslError&)>(&QWebSocketServer::handshakeInterruptedOnError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QWebSocketServer_handshakeInterruptedOnError(slot, sigval1);
	});
}

void QWebSocketServer_closed(QWebSocketServer* self) {
	self->closed();
}

void QWebSocketServer_connect_closed(QWebSocketServer* self, intptr_t slot) {
	QWebSocketServer::connect(self, static_cast<void (QWebSocketServer::*)()>(&QWebSocketServer::closed), self, [=]() {
		miqt_exec_callback_QWebSocketServer_closed(slot);
	});
}

struct miqt_string QWebSocketServer_tr2(const char* s, const char* c) {
	QString _ret = QWebSocketServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebSocketServer_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebSocketServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebSocketServer_listenWithAddress(QWebSocketServer* self, QHostAddress* address) {
	return self->listen(*address);
}

bool QWebSocketServer_listen2(QWebSocketServer* self, QHostAddress* address, unsigned short port) {
	return self->listen(*address, static_cast<quint16>(port));
}

bool QWebSocketServer_override_virtual_nextPendingConnection(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextPendingConnection = slot;
	return true;
}

QWebSocket* QWebSocketServer_virtualbase_nextPendingConnection(void* self) {
	return static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::nextPendingConnection();
}

bool QWebSocketServer_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QWebSocketServer_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::event(event);
}

bool QWebSocketServer_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QWebSocketServer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::eventFilter(watched, event);
}

bool QWebSocketServer_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QWebSocketServer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::timerEvent(event);
}

bool QWebSocketServer_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QWebSocketServer_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::childEvent(event);
}

bool QWebSocketServer_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QWebSocketServer_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::customEvent(event);
}

bool QWebSocketServer_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QWebSocketServer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::connectNotify(*signal);
}

bool QWebSocketServer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QWebSocketServer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebSocketServer*>(self)->QWebSocketServer::disconnectNotify(*signal);
}

QObject* QWebSocketServer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWebSocketServer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWebSocketServer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWebSocketServer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebSocketServer* self_cast = dynamic_cast<MiqtVirtualQWebSocketServer*>( (QWebSocketServer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWebSocketServer_delete(QWebSocketServer* self) {
	delete self;
}

