#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineRegisterProtocolHandlerRequest>
#include <qwebengineregisterprotocolhandlerrequest.h>
#include "gen_qwebengineregisterprotocolhandlerrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineRegisterProtocolHandlerRequest* QWebEngineRegisterProtocolHandlerRequest_new() {
	return new QWebEngineRegisterProtocolHandlerRequest();
}

QWebEngineRegisterProtocolHandlerRequest* QWebEngineRegisterProtocolHandlerRequest_new2(QWebEngineRegisterProtocolHandlerRequest* param1) {
	return new QWebEngineRegisterProtocolHandlerRequest(*param1);
}

void QWebEngineRegisterProtocolHandlerRequest_accept(QWebEngineRegisterProtocolHandlerRequest* self) {
	self->accept();
}

void QWebEngineRegisterProtocolHandlerRequest_reject(QWebEngineRegisterProtocolHandlerRequest* self) {
	self->reject();
}

QUrl* QWebEngineRegisterProtocolHandlerRequest_origin(const QWebEngineRegisterProtocolHandlerRequest* self) {
	return new QUrl(self->origin());
}

struct miqt_string QWebEngineRegisterProtocolHandlerRequest_scheme(const QWebEngineRegisterProtocolHandlerRequest* self) {
	QString _ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineRegisterProtocolHandlerRequest_operatorEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that) {
	return (*self == *that);
}

bool QWebEngineRegisterProtocolHandlerRequest_operatorNotEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that) {
	return (*self != *that);
}

void QWebEngineRegisterProtocolHandlerRequest_delete(QWebEngineRegisterProtocolHandlerRequest* self) {
	delete self;
}

