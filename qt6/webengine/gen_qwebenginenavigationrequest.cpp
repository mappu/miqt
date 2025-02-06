#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineNavigationRequest>
#include <qwebenginenavigationrequest.h>
#include "gen_qwebenginenavigationrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineNavigationRequest_actionChanged(intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineNavigationRequest_virtbase(QWebEngineNavigationRequest* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineNavigationRequest_metaObject(const QWebEngineNavigationRequest* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineNavigationRequest_metacast(QWebEngineNavigationRequest* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineNavigationRequest_tr(const char* s) {
	QString _ret = QWebEngineNavigationRequest::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QWebEngineNavigationRequest_url(const QWebEngineNavigationRequest* self) {
	return new QUrl(self->url());
}

bool QWebEngineNavigationRequest_isMainFrame(const QWebEngineNavigationRequest* self) {
	return self->isMainFrame();
}

int QWebEngineNavigationRequest_navigationType(const QWebEngineNavigationRequest* self) {
	QWebEngineNavigationRequest::NavigationType _ret = self->navigationType();
	return static_cast<int>(_ret);
}

void QWebEngineNavigationRequest_accept(QWebEngineNavigationRequest* self) {
	self->accept();
}

void QWebEngineNavigationRequest_reject(QWebEngineNavigationRequest* self) {
	self->reject();
}

void QWebEngineNavigationRequest_actionChanged(QWebEngineNavigationRequest* self) {
	self->actionChanged();
}

void QWebEngineNavigationRequest_connect_actionChanged(QWebEngineNavigationRequest* self, intptr_t slot) {
	QWebEngineNavigationRequest::connect(self, static_cast<void (QWebEngineNavigationRequest::*)()>(&QWebEngineNavigationRequest::actionChanged), self, [=]() {
		miqt_exec_callback_QWebEngineNavigationRequest_actionChanged(slot);
	});
}

struct miqt_string QWebEngineNavigationRequest_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineNavigationRequest::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineNavigationRequest_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineNavigationRequest::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineNavigationRequest_delete(QWebEngineNavigationRequest* self) {
	delete self;
}

