#include <QByteArray>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineUrlRequestJob>
#include <qwebengineurlrequestjob.h>
#include "gen_qwebengineurlrequestjob.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineUrlRequestJob_virtbase(QWebEngineUrlRequestJob* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineUrlRequestJob_metaObject(const QWebEngineUrlRequestJob* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlRequestJob_metacast(QWebEngineUrlRequestJob* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlRequestJob_tr(const char* s) {
	QString _ret = QWebEngineUrlRequestJob::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebEngineUrlRequestJob_requestUrl(const QWebEngineUrlRequestJob* self) {
	return new QUrl(self->requestUrl());
}

struct miqt_string QWebEngineUrlRequestJob_requestMethod(const QWebEngineUrlRequestJob* self) {
	QByteArray _qb = self->requestMethod();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUrl* QWebEngineUrlRequestJob_initiator(const QWebEngineUrlRequestJob* self) {
	return new QUrl(self->initiator());
}

void QWebEngineUrlRequestJob_reply(QWebEngineUrlRequestJob* self, struct miqt_string contentType, QIODevice* device) {
	QByteArray contentType_QByteArray(contentType.data, contentType.len);
	self->reply(contentType_QByteArray, device);
}

void QWebEngineUrlRequestJob_fail(QWebEngineUrlRequestJob* self, int error) {
	self->fail(static_cast<QWebEngineUrlRequestJob::Error>(error));
}

void QWebEngineUrlRequestJob_redirect(QWebEngineUrlRequestJob* self, QUrl* url) {
	self->redirect(*url);
}

struct miqt_string QWebEngineUrlRequestJob_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlRequestJob::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestJob_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlRequestJob::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlRequestJob_delete(QWebEngineUrlRequestJob* self) {
	delete self;
}

