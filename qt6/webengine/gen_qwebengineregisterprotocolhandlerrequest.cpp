#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineRegisterProtocolHandlerRequest>
#include <qwebengineregisterprotocolhandlerrequest.h>
#include "gen_qwebengineregisterprotocolhandlerrequest.h"
#include "_cgo_export.h"

void QWebEngineRegisterProtocolHandlerRequest_new(QWebEngineRegisterProtocolHandlerRequest** outptr_QWebEngineRegisterProtocolHandlerRequest) {
	QWebEngineRegisterProtocolHandlerRequest* ret = new QWebEngineRegisterProtocolHandlerRequest();
	*outptr_QWebEngineRegisterProtocolHandlerRequest = ret;
}

void QWebEngineRegisterProtocolHandlerRequest_new2(QWebEngineRegisterProtocolHandlerRequest* param1, QWebEngineRegisterProtocolHandlerRequest** outptr_QWebEngineRegisterProtocolHandlerRequest) {
	QWebEngineRegisterProtocolHandlerRequest* ret = new QWebEngineRegisterProtocolHandlerRequest(*param1);
	*outptr_QWebEngineRegisterProtocolHandlerRequest = ret;
}

void QWebEngineRegisterProtocolHandlerRequest_Accept(QWebEngineRegisterProtocolHandlerRequest* self) {
	self->accept();
}

void QWebEngineRegisterProtocolHandlerRequest_Reject(QWebEngineRegisterProtocolHandlerRequest* self) {
	self->reject();
}

QUrl* QWebEngineRegisterProtocolHandlerRequest_Origin(const QWebEngineRegisterProtocolHandlerRequest* self) {
	return new QUrl(self->origin());
}

struct miqt_string QWebEngineRegisterProtocolHandlerRequest_Scheme(const QWebEngineRegisterProtocolHandlerRequest* self) {
	QString _ret = self->scheme();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that) {
	return (*self == *that);
}

bool QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(const QWebEngineRegisterProtocolHandlerRequest* self, QWebEngineRegisterProtocolHandlerRequest* that) {
	return (*self != *that);
}

void QWebEngineRegisterProtocolHandlerRequest_Delete(QWebEngineRegisterProtocolHandlerRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineRegisterProtocolHandlerRequest*>( self );
	} else {
		delete self;
	}
}

