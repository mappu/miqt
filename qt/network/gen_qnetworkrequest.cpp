#include <QByteArray>
#include <QHttp2Configuration>
#include <QList>
#include <QNetworkRequest>
#include <QObject>
#include <QSslConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkrequest.h>
#include "gen_qnetworkrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QNetworkRequest* QNetworkRequest_new() {
	return new QNetworkRequest();
}

QNetworkRequest* QNetworkRequest_new2(QUrl* url) {
	return new QNetworkRequest(*url);
}

QNetworkRequest* QNetworkRequest_new3(QNetworkRequest* other) {
	return new QNetworkRequest(*other);
}

void QNetworkRequest_operatorAssign(QNetworkRequest* self, QNetworkRequest* other) {
	self->operator=(*other);
}

void QNetworkRequest_swap(QNetworkRequest* self, QNetworkRequest* other) {
	self->swap(*other);
}

bool QNetworkRequest_operatorEqual(const QNetworkRequest* self, QNetworkRequest* other) {
	return (*self == *other);
}

bool QNetworkRequest_operatorNotEqual(const QNetworkRequest* self, QNetworkRequest* other) {
	return (*self != *other);
}

QUrl* QNetworkRequest_url(const QNetworkRequest* self) {
	return new QUrl(self->url());
}

void QNetworkRequest_setUrl(QNetworkRequest* self, QUrl* url) {
	self->setUrl(*url);
}

QVariant* QNetworkRequest_header(const QNetworkRequest* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

void QNetworkRequest_setHeader(QNetworkRequest* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

bool QNetworkRequest_hasRawHeader(const QNetworkRequest* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	return self->hasRawHeader(headerName_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QNetworkRequest_rawHeaderList(const QNetworkRequest* self) {
	QList<QByteArray> _ret = self->rawHeaderList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QNetworkRequest_rawHeader(const QNetworkRequest* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray _qb = self->rawHeader(headerName_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QNetworkRequest_setRawHeader(QNetworkRequest* self, struct miqt_string headerName, struct miqt_string value) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray value_QByteArray(value.data, value.len);
	self->setRawHeader(headerName_QByteArray, value_QByteArray);
}

QVariant* QNetworkRequest_attribute(const QNetworkRequest* self, int code) {
	return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code)));
}

void QNetworkRequest_setAttribute(QNetworkRequest* self, int code, QVariant* value) {
	self->setAttribute(static_cast<QNetworkRequest::Attribute>(code), *value);
}

QSslConfiguration* QNetworkRequest_sslConfiguration(const QNetworkRequest* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkRequest_setSslConfiguration(QNetworkRequest* self, QSslConfiguration* configuration) {
	self->setSslConfiguration(*configuration);
}

void QNetworkRequest_setOriginatingObject(QNetworkRequest* self, QObject* object) {
	self->setOriginatingObject(object);
}

QObject* QNetworkRequest_originatingObject(const QNetworkRequest* self) {
	return self->originatingObject();
}

int QNetworkRequest_priority(const QNetworkRequest* self) {
	QNetworkRequest::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

void QNetworkRequest_setPriority(QNetworkRequest* self, int priority) {
	self->setPriority(static_cast<QNetworkRequest::Priority>(priority));
}

int QNetworkRequest_maximumRedirectsAllowed(const QNetworkRequest* self) {
	return self->maximumRedirectsAllowed();
}

void QNetworkRequest_setMaximumRedirectsAllowed(QNetworkRequest* self, int maximumRedirectsAllowed) {
	self->setMaximumRedirectsAllowed(static_cast<int>(maximumRedirectsAllowed));
}

struct miqt_string QNetworkRequest_peerVerifyName(const QNetworkRequest* self) {
	QString _ret = self->peerVerifyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkRequest_setPeerVerifyName(QNetworkRequest* self, struct miqt_string peerName) {
	QString peerName_QString = QString::fromUtf8(peerName.data, peerName.len);
	self->setPeerVerifyName(peerName_QString);
}

QHttp2Configuration* QNetworkRequest_http2Configuration(const QNetworkRequest* self) {
	return new QHttp2Configuration(self->http2Configuration());
}

void QNetworkRequest_setHttp2Configuration(QNetworkRequest* self, QHttp2Configuration* configuration) {
	self->setHttp2Configuration(*configuration);
}

int QNetworkRequest_transferTimeout(const QNetworkRequest* self) {
	return self->transferTimeout();
}

void QNetworkRequest_setTransferTimeout(QNetworkRequest* self) {
	self->setTransferTimeout();
}

QVariant* QNetworkRequest_attribute2(const QNetworkRequest* self, int code, QVariant* defaultValue) {
	return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code), *defaultValue));
}

void QNetworkRequest_setTransferTimeout1(QNetworkRequest* self, int timeout) {
	self->setTransferTimeout(static_cast<int>(timeout));
}

void QNetworkRequest_delete(QNetworkRequest* self) {
	delete self;
}

