#include <QByteArray>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QIODevice>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qhttpmultipart.h>
#include "gen_qhttpmultipart.h"
#include "_cgo_export.h"

QHttpPart* QHttpPart_new() {
	return new QHttpPart();
}

QHttpPart* QHttpPart_new2(QHttpPart* other) {
	return new QHttpPart(*other);
}

void QHttpPart_OperatorAssign(QHttpPart* self, QHttpPart* other) {
	self->operator=(*other);
}

void QHttpPart_Swap(QHttpPart* self, QHttpPart* other) {
	self->swap(*other);
}

bool QHttpPart_OperatorEqual(const QHttpPart* self, QHttpPart* other) {
	return self->operator==(*other);
}

bool QHttpPart_OperatorNotEqual(const QHttpPart* self, QHttpPart* other) {
	return self->operator!=(*other);
}

void QHttpPart_SetHeader(QHttpPart* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_SetRawHeader(QHttpPart* self, struct miqt_string headerName, struct miqt_string headerValue) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray headerValue_QByteArray(headerValue.data, headerValue.len);
	self->setRawHeader(headerName_QByteArray, headerValue_QByteArray);
}

void QHttpPart_SetBody(QHttpPart* self, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->setBody(body_QByteArray);
}

void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device) {
	self->setBodyDevice(device);
}

void QHttpPart_Delete(QHttpPart* self) {
	delete self;
}

QHttpMultiPart* QHttpMultiPart_new() {
	return new QHttpMultiPart();
}

QHttpMultiPart* QHttpMultiPart_new2(int contentType) {
	return new QHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType));
}

QHttpMultiPart* QHttpMultiPart_new3(QObject* parent) {
	return new QHttpMultiPart(parent);
}

QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent) {
	return new QHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType), parent);
}

QMetaObject* QHttpMultiPart_MetaObject(const QHttpMultiPart* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHttpMultiPart_Metacast(QHttpMultiPart* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHttpMultiPart_Tr(const char* s) {
	QString _ret = QHttpMultiPart::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_TrUtf8(const char* s) {
	QString _ret = QHttpMultiPart::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_Append(QHttpMultiPart* self, QHttpPart* httpPart) {
	self->append(*httpPart);
}

void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType) {
	self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

struct miqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self) {
	QByteArray _qb = self->boundary();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, struct miqt_string boundary) {
	QByteArray boundary_QByteArray(boundary.data, boundary.len);
	self->setBoundary(boundary_QByteArray);
}

struct miqt_string QHttpMultiPart_Tr2(const char* s, const char* c) {
	QString _ret = QHttpMultiPart::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHttpMultiPart::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_TrUtf82(const char* s, const char* c) {
	QString _ret = QHttpMultiPart::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QHttpMultiPart::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_Delete(QHttpMultiPart* self) {
	delete self;
}

