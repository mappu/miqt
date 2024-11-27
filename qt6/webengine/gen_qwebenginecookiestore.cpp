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
#include "_cgo_export.h"

QMetaObject* QWebEngineCookieStore_MetaObject(const QWebEngineCookieStore* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineCookieStore_Metacast(QWebEngineCookieStore* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineCookieStore_Tr(const char* s) {
	QString _ret = QWebEngineCookieStore::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCookieStore_SetCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->setCookie(*cookie);
}

void QWebEngineCookieStore_DeleteCookie(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->deleteCookie(*cookie);
}

void QWebEngineCookieStore_DeleteSessionCookies(QWebEngineCookieStore* self) {
	self->deleteSessionCookies();
}

void QWebEngineCookieStore_DeleteAllCookies(QWebEngineCookieStore* self) {
	self->deleteAllCookies();
}

void QWebEngineCookieStore_LoadAllCookies(QWebEngineCookieStore* self) {
	self->loadAllCookies();
}

void QWebEngineCookieStore_CookieAdded(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->cookieAdded(*cookie);
}

void QWebEngineCookieStore_connect_CookieAdded(QWebEngineCookieStore* self, intptr_t slot) {
	QWebEngineCookieStore::connect(self, static_cast<void (QWebEngineCookieStore::*)(const QNetworkCookie&)>(&QWebEngineCookieStore::cookieAdded), self, [=](const QNetworkCookie& cookie) {
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
		miqt_exec_callback_QWebEngineCookieStore_CookieAdded(slot, sigval1);
	});
}

void QWebEngineCookieStore_CookieRemoved(QWebEngineCookieStore* self, QNetworkCookie* cookie) {
	self->cookieRemoved(*cookie);
}

void QWebEngineCookieStore_connect_CookieRemoved(QWebEngineCookieStore* self, intptr_t slot) {
	QWebEngineCookieStore::connect(self, static_cast<void (QWebEngineCookieStore::*)(const QNetworkCookie&)>(&QWebEngineCookieStore::cookieRemoved), self, [=](const QNetworkCookie& cookie) {
		const QNetworkCookie& cookie_ret = cookie;
		// Cast returned reference into pointer
		QNetworkCookie* sigval1 = const_cast<QNetworkCookie*>(&cookie_ret);
		miqt_exec_callback_QWebEngineCookieStore_CookieRemoved(slot, sigval1);
	});
}

struct miqt_string QWebEngineCookieStore_Tr2(const char* s, const char* c) {
	QString _ret = QWebEngineCookieStore::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineCookieStore_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineCookieStore::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineCookieStore_SetCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin) {
	self->setCookie(*cookie, *origin);
}

void QWebEngineCookieStore_DeleteCookie2(QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin) {
	self->deleteCookie(*cookie, *origin);
}

void QWebEngineCookieStore_Delete(QWebEngineCookieStore* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineCookieStore*>( self );
	} else {
		delete self;
	}
}

void QWebEngineCookieStore__FilterRequest_new(QWebEngineCookieStore__FilterRequest* param1, QWebEngineCookieStore__FilterRequest** outptr_QWebEngineCookieStore__FilterRequest) {
	QWebEngineCookieStore::FilterRequest* ret = new QWebEngineCookieStore::FilterRequest(*param1);
	*outptr_QWebEngineCookieStore__FilterRequest = ret;
}

void QWebEngineCookieStore__FilterRequest_OperatorAssign(QWebEngineCookieStore__FilterRequest* self, QWebEngineCookieStore__FilterRequest* param1) {
	self->operator=(*param1);
}

void QWebEngineCookieStore__FilterRequest_Delete(QWebEngineCookieStore__FilterRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineCookieStore::FilterRequest*>( self );
	} else {
		delete self;
	}
}

