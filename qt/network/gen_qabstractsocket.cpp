#include <QAbstractSocket>
#include <QAuthenticator>
#include <QHostAddress>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qabstractsocket.h>
#include "gen_qabstractsocket.h"
#include "_cgo_export.h"

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent) {
	return new QAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
}

QMetaObject* QAbstractSocket_MetaObject(const QAbstractSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSocket_Metacast(QAbstractSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSocket_Tr(const char* s) {
	QString _ret = QAbstractSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_TrUtf8(const char* s) {
	QString _ret = QAbstractSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_Resume(QAbstractSocket* self) {
	self->resume();
}

int QAbstractSocket_PauseMode(const QAbstractSocket* self) {
	QAbstractSocket::PauseModes _ret = self->pauseMode();
	return static_cast<int>(_ret);
}

void QAbstractSocket_SetPauseMode(QAbstractSocket* self, int pauseMode) {
	self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_Bind(QAbstractSocket* self, QHostAddress* address) {
	return self->bind(*address);
}

bool QAbstractSocket_Bind2(QAbstractSocket* self) {
	return self->bind();
}

void QAbstractSocket_ConnectToHost(QAbstractSocket* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port));
}

void QAbstractSocket_ConnectToHost2(QAbstractSocket* self, QHostAddress* address, uint16_t port) {
	self->connectToHost(*address, static_cast<quint16>(port));
}

void QAbstractSocket_DisconnectFromHost(QAbstractSocket* self) {
	self->disconnectFromHost();
}

bool QAbstractSocket_IsValid(const QAbstractSocket* self) {
	return self->isValid();
}

long long QAbstractSocket_BytesAvailable(const QAbstractSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QAbstractSocket_BytesToWrite(const QAbstractSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_CanReadLine(const QAbstractSocket* self) {
	return self->canReadLine();
}

uint16_t QAbstractSocket_LocalPort(const QAbstractSocket* self) {
	quint16 _ret = self->localPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QAbstractSocket_LocalAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->localAddress());
}

uint16_t QAbstractSocket_PeerPort(const QAbstractSocket* self) {
	quint16 _ret = self->peerPort();
	return static_cast<uint16_t>(_ret);
}

QHostAddress* QAbstractSocket_PeerAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->peerAddress());
}

struct miqt_string QAbstractSocket_PeerName(const QAbstractSocket* self) {
	QString _ret = self->peerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QAbstractSocket_ReadBufferSize(const QAbstractSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QAbstractSocket_SetReadBufferSize(QAbstractSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

void QAbstractSocket_Abort(QAbstractSocket* self) {
	self->abort();
}

intptr_t QAbstractSocket_SocketDescriptor(const QAbstractSocket* self) {
	qintptr _ret = self->socketDescriptor();
	return static_cast<intptr_t>(_ret);
}

bool QAbstractSocket_SetSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

void QAbstractSocket_SetSocketOption(QAbstractSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QAbstractSocket_SocketOption(QAbstractSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QAbstractSocket_SocketType(const QAbstractSocket* self) {
	QAbstractSocket::SocketType _ret = self->socketType();
	return static_cast<int>(_ret);
}

int QAbstractSocket_State(const QAbstractSocket* self) {
	QAbstractSocket::SocketState _ret = self->state();
	return static_cast<int>(_ret);
}

int QAbstractSocket_Error(const QAbstractSocket* self) {
	QAbstractSocket::SocketError _ret = self->error();
	return static_cast<int>(_ret);
}

void QAbstractSocket_Close(QAbstractSocket* self) {
	self->close();
}

bool QAbstractSocket_IsSequential(const QAbstractSocket* self) {
	return self->isSequential();
}

bool QAbstractSocket_AtEnd(const QAbstractSocket* self) {
	return self->atEnd();
}

bool QAbstractSocket_Flush(QAbstractSocket* self) {
	return self->flush();
}

bool QAbstractSocket_WaitForConnected(QAbstractSocket* self) {
	return self->waitForConnected();
}

bool QAbstractSocket_WaitForReadyRead(QAbstractSocket* self) {
	return self->waitForReadyRead();
}

bool QAbstractSocket_WaitForBytesWritten(QAbstractSocket* self) {
	return self->waitForBytesWritten();
}

bool QAbstractSocket_WaitForDisconnected(QAbstractSocket* self) {
	return self->waitForDisconnected();
}

void QAbstractSocket_SetProxy(QAbstractSocket* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_Proxy(const QAbstractSocket* self) {
	return new QNetworkProxy(self->proxy());
}

struct miqt_string QAbstractSocket_ProtocolTag(const QAbstractSocket* self) {
	QString _ret = self->protocolTag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_SetProtocolTag(QAbstractSocket* self, struct miqt_string tag) {
	QString tag_QString = QString::fromUtf8(tag.data, tag.len);
	self->setProtocolTag(tag_QString);
}

void QAbstractSocket_HostFound(QAbstractSocket* self) {
	self->hostFound();
}

void QAbstractSocket_connect_HostFound(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::hostFound), self, [=]() {
		miqt_exec_callback_QAbstractSocket_HostFound(slot);
	});
}

void QAbstractSocket_Connected(QAbstractSocket* self) {
	self->connected();
}

void QAbstractSocket_connect_Connected(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::connected), self, [=]() {
		miqt_exec_callback_QAbstractSocket_Connected(slot);
	});
}

void QAbstractSocket_Disconnected(QAbstractSocket* self) {
	self->disconnected();
}

void QAbstractSocket_connect_Disconnected(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::disconnected), self, [=]() {
		miqt_exec_callback_QAbstractSocket_Disconnected(slot);
	});
}

void QAbstractSocket_StateChanged(QAbstractSocket* self, int param1) {
	self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void QAbstractSocket_connect_StateChanged(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketState)>(&QAbstractSocket::stateChanged), self, [=](QAbstractSocket::SocketState param1) {
		QAbstractSocket::SocketState param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_StateChanged(slot, sigval1);
	});
}

void QAbstractSocket_ErrorWithQAbstractSocketSocketError(QAbstractSocket* self, int param1) {
	self->error(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_connect_ErrorWithQAbstractSocketSocketError(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::error), self, [=](QAbstractSocket::SocketError param1) {
		QAbstractSocket::SocketError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_ErrorWithQAbstractSocketSocketError(slot, sigval1);
	});
}

void QAbstractSocket_ErrorOccurred(QAbstractSocket* self, int param1) {
	self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void QAbstractSocket_connect_ErrorOccurred(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::errorOccurred), self, [=](QAbstractSocket::SocketError param1) {
		QAbstractSocket::SocketError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_ErrorOccurred(slot, sigval1);
	});
}

void QAbstractSocket_ProxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void QAbstractSocket_connect_ProxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
	QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(const QNetworkProxy&, QAuthenticator*)>(&QAbstractSocket::proxyAuthenticationRequired), self, [=](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QAbstractSocket_ProxyAuthenticationRequired(slot, sigval1, sigval2);
	});
}

struct miqt_string QAbstractSocket_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QAbstractSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSocket_Bind22(QAbstractSocket* self, QHostAddress* address, uint16_t port) {
	return self->bind(*address, static_cast<quint16>(port));
}

bool QAbstractSocket_Bind3(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
	return self->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

bool QAbstractSocket_Bind1(QAbstractSocket* self, uint16_t port) {
	return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_Bind23(QAbstractSocket* self, uint16_t port, int mode) {
	return self->bind(static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

void QAbstractSocket_ConnectToHost3(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode));
}

void QAbstractSocket_ConnectToHost4(QAbstractSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QAbstractSocket_ConnectToHost32(QAbstractSocket* self, QHostAddress* address, uint16_t port, int mode) {
	self->connectToHost(*address, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode));
}

bool QAbstractSocket_SetSocketDescriptor2(QAbstractSocket* self, intptr_t socketDescriptor, int state) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state));
}

bool QAbstractSocket_SetSocketDescriptor3(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));
}

bool QAbstractSocket_WaitForConnected1(QAbstractSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForReadyRead1(QAbstractSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForBytesWritten1(QAbstractSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QAbstractSocket_WaitForDisconnected1(QAbstractSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

void QAbstractSocket_Delete(QAbstractSocket* self) {
	delete self;
}

