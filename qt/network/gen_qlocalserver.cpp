#include <QLocalServer>
#include <QLocalSocket>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qlocalserver.h>
#include "gen_qlocalserver.h"
#include "_cgo_export.h"

QLocalServer* QLocalServer_new() {
	return new QLocalServer();
}

QLocalServer* QLocalServer_new2(QObject* parent) {
	return new QLocalServer(parent);
}

QMetaObject* QLocalServer_MetaObject(const QLocalServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLocalServer_Metacast(QLocalServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLocalServer_Tr(const char* s) {
	QString _ret = QLocalServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_TrUtf8(const char* s) {
	QString _ret = QLocalServer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLocalServer_NewConnection(QLocalServer* self) {
	self->newConnection();
}

void QLocalServer_connect_NewConnection(QLocalServer* self, intptr_t slot) {
	QLocalServer::connect(self, static_cast<void (QLocalServer::*)()>(&QLocalServer::newConnection), self, [=]() {
		miqt_exec_callback_QLocalServer_NewConnection(slot);
	});
}

void QLocalServer_Close(QLocalServer* self) {
	self->close();
}

struct miqt_string QLocalServer_ErrorString(const QLocalServer* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLocalServer_HasPendingConnections(const QLocalServer* self) {
	return self->hasPendingConnections();
}

bool QLocalServer_IsListening(const QLocalServer* self) {
	return self->isListening();
}

bool QLocalServer_Listen(QLocalServer* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->listen(name_QString);
}

bool QLocalServer_ListenWithSocketDescriptor(QLocalServer* self, intptr_t socketDescriptor) {
	return self->listen((qintptr)(socketDescriptor));
}

int QLocalServer_MaxPendingConnections(const QLocalServer* self) {
	return self->maxPendingConnections();
}

QLocalSocket* QLocalServer_NextPendingConnection(QLocalServer* self) {
	return self->nextPendingConnection();
}

struct miqt_string QLocalServer_ServerName(const QLocalServer* self) {
	QString _ret = self->serverName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_FullServerName(const QLocalServer* self) {
	QString _ret = self->fullServerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLocalServer_RemoveServer(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return QLocalServer::removeServer(name_QString);
}

int QLocalServer_ServerError(const QLocalServer* self) {
	QAbstractSocket::SocketError _ret = self->serverError();
	return static_cast<int>(_ret);
}

void QLocalServer_SetMaxPendingConnections(QLocalServer* self, int numConnections) {
	self->setMaxPendingConnections(static_cast<int>(numConnections));
}

bool QLocalServer_WaitForNewConnection(QLocalServer* self) {
	return self->waitForNewConnection();
}

void QLocalServer_SetSocketOptions(QLocalServer* self, int options) {
	self->setSocketOptions(static_cast<QLocalServer::SocketOptions>(options));
}

int QLocalServer_SocketOptions(const QLocalServer* self) {
	QLocalServer::SocketOptions _ret = self->socketOptions();
	return static_cast<int>(_ret);
}

intptr_t QLocalServer_SocketDescriptor(const QLocalServer* self) {
	qintptr _ret = self->socketDescriptor();
	return static_cast<intptr_t>(_ret);
}

struct miqt_string QLocalServer_Tr2(const char* s, const char* c) {
	QString _ret = QLocalServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLocalServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_TrUtf82(const char* s, const char* c) {
	QString _ret = QLocalServer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLocalServer_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QLocalServer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QLocalServer_WaitForNewConnection1(QLocalServer* self, int msec) {
	return self->waitForNewConnection(static_cast<int>(msec));
}

bool QLocalServer_WaitForNewConnection2(QLocalServer* self, int msec, bool* timedOut) {
	return self->waitForNewConnection(static_cast<int>(msec), timedOut);
}

void QLocalServer_Delete(QLocalServer* self) {
	delete self;
}

