#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNavigationRequest>
#include <qwebenginenavigationrequest.h>
#include "gen_qwebenginenavigationrequest.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QWebEngineNavigationRequest_virtbase(QWebEngineNavigationRequest* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineNavigationRequest_MetaObject(const QWebEngineNavigationRequest* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineNavigationRequest_Metacast(QWebEngineNavigationRequest* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineNavigationRequest_Tr(const char* s) {
	QString _ret = QWebEngineNavigationRequest::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebEngineNavigationRequest_Url(const QWebEngineNavigationRequest* self) {
	return new QUrl(self->url());
}

bool QWebEngineNavigationRequest_IsMainFrame(const QWebEngineNavigationRequest* self) {
	return self->isMainFrame();
}

int QWebEngineNavigationRequest_NavigationType(const QWebEngineNavigationRequest* self) {
	QWebEngineNavigationRequest::NavigationType _ret = self->navigationType();
	return static_cast<int>(_ret);
}

void QWebEngineNavigationRequest_Accept(QWebEngineNavigationRequest* self) {
	self->accept();
}

void QWebEngineNavigationRequest_Reject(QWebEngineNavigationRequest* self) {
	self->reject();
}

void QWebEngineNavigationRequest_ActionChanged(QWebEngineNavigationRequest* self) {
	self->actionChanged();
}

void QWebEngineNavigationRequest_connect_ActionChanged(QWebEngineNavigationRequest* self, intptr_t slot) {
	QWebEngineNavigationRequest::connect(self, static_cast<void (QWebEngineNavigationRequest::*)()>(&QWebEngineNavigationRequest::actionChanged), self, [=]() {
		miqt_exec_callback_QWebEngineNavigationRequest_ActionChanged(slot);
	});
}

struct miqt_string QWebEngineNavigationRequest_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineNavigationRequest::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNavigationRequest_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNavigationRequest::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineNavigationRequest_Delete(QWebEngineNavigationRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineNavigationRequest*>( self );
	} else {
		delete self;
	}
}

