#include <QByteArray>
#include <QDateTime>
#include <QList>
#include <QNetworkCookie>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkcookie.h>
#include "gen_qnetworkcookie.h"
#include "_cgo_export.h"

QNetworkCookie* QNetworkCookie_new() {
	return new QNetworkCookie();
}

QNetworkCookie* QNetworkCookie_new2(QNetworkCookie* other) {
	return new QNetworkCookie(*other);
}

QNetworkCookie* QNetworkCookie_new3(struct miqt_string name) {
	QByteArray name_QByteArray(name.data, name.len);
	return new QNetworkCookie(name_QByteArray);
}

QNetworkCookie* QNetworkCookie_new4(struct miqt_string name, struct miqt_string value) {
	QByteArray name_QByteArray(name.data, name.len);
	QByteArray value_QByteArray(value.data, value.len);
	return new QNetworkCookie(name_QByteArray, value_QByteArray);
}

void QNetworkCookie_OperatorAssign(QNetworkCookie* self, QNetworkCookie* other) {
	self->operator=(*other);
}

void QNetworkCookie_Swap(QNetworkCookie* self, QNetworkCookie* other) {
	self->swap(*other);
}

bool QNetworkCookie_OperatorEqual(const QNetworkCookie* self, QNetworkCookie* other) {
	return (*self == *other);
}

bool QNetworkCookie_OperatorNotEqual(const QNetworkCookie* self, QNetworkCookie* other) {
	return (*self != *other);
}

bool QNetworkCookie_IsSecure(const QNetworkCookie* self) {
	return self->isSecure();
}

void QNetworkCookie_SetSecure(QNetworkCookie* self, bool enable) {
	self->setSecure(enable);
}

bool QNetworkCookie_IsHttpOnly(const QNetworkCookie* self) {
	return self->isHttpOnly();
}

void QNetworkCookie_SetHttpOnly(QNetworkCookie* self, bool enable) {
	self->setHttpOnly(enable);
}

bool QNetworkCookie_IsSessionCookie(const QNetworkCookie* self) {
	return self->isSessionCookie();
}

QDateTime* QNetworkCookie_ExpirationDate(const QNetworkCookie* self) {
	return new QDateTime(self->expirationDate());
}

void QNetworkCookie_SetExpirationDate(QNetworkCookie* self, QDateTime* date) {
	self->setExpirationDate(*date);
}

struct miqt_string QNetworkCookie_Domain(const QNetworkCookie* self) {
	QString _ret = self->domain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkCookie_SetDomain(QNetworkCookie* self, struct miqt_string domain) {
	QString domain_QString = QString::fromUtf8(domain.data, domain.len);
	self->setDomain(domain_QString);
}

struct miqt_string QNetworkCookie_Path(const QNetworkCookie* self) {
	QString _ret = self->path();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkCookie_SetPath(QNetworkCookie* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPath(path_QString);
}

struct miqt_string QNetworkCookie_Name(const QNetworkCookie* self) {
	QByteArray _qb = self->name();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkCookie_SetName(QNetworkCookie* self, struct miqt_string cookieName) {
	QByteArray cookieName_QByteArray(cookieName.data, cookieName.len);
	self->setName(cookieName_QByteArray);
}

struct miqt_string QNetworkCookie_Value(const QNetworkCookie* self) {
	QByteArray _qb = self->value();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkCookie_SetValue(QNetworkCookie* self, struct miqt_string value) {
	QByteArray value_QByteArray(value.data, value.len);
	self->setValue(value_QByteArray);
}

struct miqt_string QNetworkCookie_ToRawForm(const QNetworkCookie* self) {
	QByteArray _qb = self->toRawForm();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QNetworkCookie_HasSameIdentifier(const QNetworkCookie* self, QNetworkCookie* other) {
	return self->hasSameIdentifier(*other);
}

void QNetworkCookie_Normalize(QNetworkCookie* self, QUrl* url) {
	self->normalize(*url);
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookie_ParseCookies(struct miqt_string cookieString) {
	QByteArray cookieString_QByteArray(cookieString.data, cookieString.len);
	QList<QNetworkCookie> _ret = QNetworkCookie::parseCookies(cookieString_QByteArray);
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkCookie** _arr = static_cast<QNetworkCookie**>(malloc(sizeof(QNetworkCookie*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkCookie(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QNetworkCookie_ToRawForm1(const QNetworkCookie* self, int form) {
	QByteArray _qb = self->toRawForm(static_cast<QNetworkCookie::RawForm>(form));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkCookie_Delete(QNetworkCookie* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QNetworkCookie*>( self );
	} else {
		delete self;
	}
}

