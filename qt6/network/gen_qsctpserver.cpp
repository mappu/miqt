#include <QMetaObject>
#include <QObject>
#include <QSctpServer>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsctpserver.h>
#include "gen_qsctpserver.h"
#include "_cgo_export.h"

QSctpServer* QSctpServer_new() {
	return new QSctpServer();
}

QSctpServer* QSctpServer_new2(QObject* parent) {
	return new QSctpServer(parent);
}

QMetaObject* QSctpServer_MetaObject(const QSctpServer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpServer_Metacast(QSctpServer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpServer_Tr(const char* s) {
	QString _ret = QSctpServer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpServer_SetMaximumChannelCount(QSctpServer* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpServer_MaximumChannelCount(const QSctpServer* self) {
	return self->maximumChannelCount();
}

QSctpSocket* QSctpServer_NextPendingDatagramConnection(QSctpServer* self) {
	return self->nextPendingDatagramConnection();
}

struct miqt_string QSctpServer_Tr2(const char* s, const char* c) {
	QString _ret = QSctpServer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpServer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpServer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpServer_Delete(QSctpServer* self) {
	delete self;
}

