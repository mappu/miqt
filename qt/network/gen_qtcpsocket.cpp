#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <qtcpsocket.h>
#include "gen_qtcpsocket.h"
#include "_cgo_export.h"

QTcpSocket* QTcpSocket_new() {
	return new QTcpSocket();
}

QTcpSocket* QTcpSocket_new2(QObject* parent) {
	return new QTcpSocket(parent);
}

QMetaObject* QTcpSocket_MetaObject(const QTcpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTcpSocket_Metacast(QTcpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTcpSocket_Tr(const char* s) {
	QString _ret = QTcpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_TrUtf8(const char* s) {
	QString _ret = QTcpSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_Tr2(const char* s, const char* c) {
	QString _ret = QTcpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QTcpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QTcpSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTcpSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QTcpSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTcpSocket_Delete(QTcpSocket* self) {
	delete self;
}

