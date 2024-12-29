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

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QWebEngineNewWindowRequest_virtbase(QWebEngineNewWindowRequest* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineNewWindowRequest_MetaObject(const QWebEngineNewWindowRequest* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineNewWindowRequest_Metacast(QWebEngineNewWindowRequest* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineNewWindowRequest_Tr(const char* s) {
	QString _ret = QWebEngineNewWindowRequest::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineNewWindowRequest_Destination(const QWebEngineNewWindowRequest* self) {
	QWebEngineNewWindowRequest::DestinationType _ret = self->destination();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineNewWindowRequest_RequestedUrl(const QWebEngineNewWindowRequest* self) {
	return new QUrl(self->requestedUrl());
}

QRect* QWebEngineNewWindowRequest_RequestedGeometry(const QWebEngineNewWindowRequest* self) {
	return new QRect(self->requestedGeometry());
}

bool QWebEngineNewWindowRequest_IsUserInitiated(const QWebEngineNewWindowRequest* self) {
	return self->isUserInitiated();
}

void QWebEngineNewWindowRequest_OpenIn(QWebEngineNewWindowRequest* self, QWebEnginePage* param1) {
	self->openIn(param1);
}

struct miqt_string QWebEngineNewWindowRequest_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineNewWindowRequest::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNewWindowRequest_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNewWindowRequest::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineNewWindowRequest_Delete(QWebEngineNewWindowRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineNewWindowRequest*>( self );
	} else {
		delete self;
	}
}

