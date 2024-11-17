#include <QList>
#include <QMetaObject>
#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qnetworkcookiejar.h>
#include "gen_qnetworkcookiejar.h"
#include "_cgo_export.h"

QNetworkCookieJar* QNetworkCookieJar_new() {
	return new QNetworkCookieJar();
}

QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent) {
	return new QNetworkCookieJar(parent);
}

QMetaObject* QNetworkCookieJar_MetaObject(const QNetworkCookieJar* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkCookieJar_Metacast(QNetworkCookieJar* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkCookieJar_Tr(const char* s) {
	QString _ret = QNetworkCookieJar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_TrUtf8(const char* s) {
	QString _ret = QNetworkCookieJar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkCookie* */  QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, QUrl* url) {
	QList<QNetworkCookie> _ret = self->cookiesForUrl(*url);
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

bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, struct miqt_array /* of QNetworkCookie* */  cookieList, QUrl* url) {
	QList<QNetworkCookie> cookieList_QList;
	cookieList_QList.reserve(cookieList.len);
	QNetworkCookie** cookieList_arr = static_cast<QNetworkCookie**>(cookieList.data);
	for(size_t i = 0; i < cookieList.len; ++i) {
		cookieList_QList.push_back(*(cookieList_arr[i]));
	}
	return self->setCookiesFromUrl(cookieList_QList, *url);
}

bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->insertCookie(*cookie);
}

bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->updateCookie(*cookie);
}

bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, QNetworkCookie* cookie) {
	return self->deleteCookie(*cookie);
}

struct miqt_string QNetworkCookieJar_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkCookieJar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkCookieJar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_TrUtf82(const char* s, const char* c) {
	QString _ret = QNetworkCookieJar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkCookieJar_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkCookieJar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkCookieJar_Delete(QNetworkCookieJar* self) {
	delete self;
}

