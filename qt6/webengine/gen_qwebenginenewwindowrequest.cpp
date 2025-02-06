#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNewWindowRequest>
#include <QWebEnginePage>
#include <qwebenginenewwindowrequest.h>
#include "gen_qwebenginenewwindowrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineNewWindowRequest_virtbase(QWebEngineNewWindowRequest* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineNewWindowRequest_metaObject(const QWebEngineNewWindowRequest* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineNewWindowRequest_metacast(QWebEngineNewWindowRequest* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineNewWindowRequest_tr(const char* s) {
	QString _ret = QWebEngineNewWindowRequest::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineNewWindowRequest_destination(const QWebEngineNewWindowRequest* self) {
	QWebEngineNewWindowRequest::DestinationType _ret = self->destination();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineNewWindowRequest_requestedUrl(const QWebEngineNewWindowRequest* self) {
	return new QUrl(self->requestedUrl());
}

QRect* QWebEngineNewWindowRequest_requestedGeometry(const QWebEngineNewWindowRequest* self) {
	return new QRect(self->requestedGeometry());
}

bool QWebEngineNewWindowRequest_isUserInitiated(const QWebEngineNewWindowRequest* self) {
	return self->isUserInitiated();
}

void QWebEngineNewWindowRequest_openIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1) {
	self->openIn(param1);
}

struct miqt_string QWebEngineNewWindowRequest_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineNewWindowRequest::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNewWindowRequest_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNewWindowRequest::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineNewWindowRequest_delete(QWebEngineNewWindowRequest* self) {
	delete self;
}

