#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkCookie>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineCookieStore>
#define WORKAROUND_INNER_CLASS_DEFINITION_QWebEngineCookieStore__FilterRequest
#include <qwebenginecookiestore.h>
#include "gen_qwebenginecookiestore.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QWebEngineCookieStore_cookieAdded(intptr_t, QNetworkCookie*);
void miqt_exec_callback_QWebEngineCookieStore_cookieRemoved(intptr_t, QNetworkCookie*);
#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineCookieStore_virtbase(QWebEngineCookieStore* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineCookieStore_metaObject(const QWebEngineCookieStore* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineCookieStore_metacast(QWebEngineCookieStore* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineCookieStore_tr(const char* s) {
	QString _ret = QWebEngineCookieStore::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCookieStore_setCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->setCookie(*cookie);
}

void QWebEngineCookieStore_deleteCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->deleteCookie(*cookie);
}

void QWebEngineCookieStore_deleteSessionCookies(QWebEngineCookieStore* self) {
	self->deleteSessionCookies();
}

void QWebEngineCookieStore_deleteAllCookies(QWebEngineCookieStore* self) {
	self->deleteAllCookies();
}

void QWebEngineCookieStore_loadAllCookies(QWebEngineCookieStore* self) {
	self->loadAllCookies();
}

void QWebEngineCookieStore_cookieAdded(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->cookieAdded(*cookie);
}

void QWebEngineCookieStore_connect_cookieAdded(QWebEngineCookieStore* self, intptr_t slot) {
	QWebEngineCookieStore::connect(self, static_cast<void (QWebEngineCookieStore::*)(const QNetworkCookie&)>(&QWebEngineCookieStore::cookieAdded), self, [=](const QNetworkCookie& cookie) {
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
		miqt_exec_callback_QWebEngineCookieStore_cookieAdded(slot, sigval1);
	});
}

void QWebEngineCookieStore_cookieRemoved(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->cookieRemoved(*cookie);
}

void QWebEngineCookieStore_connect_cookieRemoved(QWebEngineCookieStore* self, intptr_t slot) {
	QWebEngineCookieStore::connect(self, static_cast<void (QWebEngineCookieStore::*)(const QNetworkCookie&)>(&QWebEngineCookieStore::cookieRemoved), self, [=](const QNetworkCookie& cookie) {
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
		miqt_exec_callback_QWebEngineCookieStore_cookieRemoved(slot, sigval1);
	});
}

struct miqt_string QWebEngineCookieStore_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineCookieStore::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineCookieStore_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineCookieStore::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCookieStore_setCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin) {
	self->setCookie(*cookie, *origin);
}

void QWebEngineCookieStore_deleteCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin) {
	self->deleteCookie(*cookie, *origin);
}

void QWebEngineCookieStore_delete(QWebEngineCookieStore* self) {
	delete self;
}

QWebEngineCookieStore__FilterRequest* QWebEngineCookieStore__FilterRequest_new(QWebEngineCookieStore__FilterRequest* param1) {
	return new QWebEngineCookieStore::FilterRequest(*param1);
}

void QWebEngineCookieStore__FilterRequest_operatorAssign(QWebEngineCookieStore__FilterRequest* self, QWebEngineCookieStore__FilterRequest* param1) {
	self->operator=(*param1);
}

void QWebEngineCookieStore__FilterRequest_delete(QWebEngineCookieStore__FilterRequest* self) {
	delete self;
}

