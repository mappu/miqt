#include <QHostAddress>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpServer>
#include <QTcpSocket>
#include <qtcpserver.h>
#include "gen_qtcpserver.h"
#include "_cgo_export.h"

QTcpServer* QTcpServer_new() {
	return new QTcpServer();
}

QTcpServer* QTcpServer_new2(QObject* parent) {
	return new QTcpServer(parent);
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

void QTcpServer_SetListenBacklogSize(QTcpServer* self, int size) {
	self->setListenBacklogSize(static_cast<int>(size));
}

int QTcpServer_ListenBacklogSize(const QTcpServer* self) {
	return self->listenBacklogSize();
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
	return static_cast<intptr_t>(_ret);
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
	QTcpServer::connect(self, static_cast<void (QTcpServer::*)()>(&QTcpServer::newConnection), self, [=]() {
		miqt_exec_callback_QTcpServer_NewConnection(slot);
	});
}

void QTcpServer_AcceptError(QTcpServer* self, int socketError) {
	self->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QTcpServer_connect_AcceptError(QTcpServer* self, intptr_t slot) {
	QTcpServer::connect(self, static_cast<void (QTcpServer::*)(QAbstractSocket::SocketError)>(&QTcpServer::acceptError), self, [=](QAbstractSocket::SocketError socketError) {
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

void QTcpServer_Delete(QTcpServer* self) {
	delete self;
}

