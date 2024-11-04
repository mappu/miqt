#include <QMetaObject>
#include <QNetworkDatagram>
#include <QObject>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsctpsocket.h>
#include "gen_qsctpsocket.h"
#include "_cgo_export.h"

QSctpSocket* QSctpSocket_new() {
	return new QSctpSocket();
}

QSctpSocket* QSctpSocket_new2(QObject* parent) {
	return new QSctpSocket(parent);
}

QMetaObject* QSctpSocket_MetaObject(const QSctpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpSocket_Metacast(QSctpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpSocket_Tr(const char* s) {
	QString _ret = QSctpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpSocket_Close(QSctpSocket* self) {
	self->close();
}

void QSctpSocket_DisconnectFromHost(QSctpSocket* self) {
	self->disconnectFromHost();
}

void QSctpSocket_SetMaximumChannelCount(QSctpSocket* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpSocket_MaximumChannelCount(const QSctpSocket* self) {
	return self->maximumChannelCount();
}

bool QSctpSocket_IsInDatagramMode(const QSctpSocket* self) {
	return self->isInDatagramMode();
}

QNetworkDatagram* QSctpSocket_ReadDatagram(QSctpSocket* self) {
	return new QNetworkDatagram(self->readDatagram());
}

bool QSctpSocket_WriteDatagram(QSctpSocket* self, QNetworkDatagram* datagram) {
	return self->writeDatagram(*datagram);
}

struct miqt_string QSctpSocket_Tr2(const char* s, const char* c) {
	QString _ret = QSctpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpSocket_Delete(QSctpSocket* self) {
	delete self;
}

