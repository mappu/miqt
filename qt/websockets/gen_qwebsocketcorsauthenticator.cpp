#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWebSocketCorsAuthenticator>
#include <qwebsocketcorsauthenticator.h>
#include "gen_qwebsocketcorsauthenticator.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new(struct miqt_string origin) {
	QString origin_QString = QString::fromUtf8(origin.data, origin.len);
	return new (std::nothrow) QWebSocketCorsAuthenticator(origin_QString);
}

QWebSocketCorsAuthenticator* QWebSocketCorsAuthenticator_new2(QWebSocketCorsAuthenticator* other) {
	return new (std::nothrow) QWebSocketCorsAuthenticator(*other);
}

void QWebSocketCorsAuthenticator_swap(QWebSocketCorsAuthenticator* self, QWebSocketCorsAuthenticator* other) {
	self->swap(*other);
}

void QWebSocketCorsAuthenticator_operatorAssign(QWebSocketCorsAuthenticator* self, QWebSocketCorsAuthenticator* other) {
	self->operator=(*other);
}

struct miqt_string QWebSocketCorsAuthenticator_origin(const QWebSocketCorsAuthenticator* self) {
	QString _ret = self->origin();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebSocketCorsAuthenticator_setAllowed(QWebSocketCorsAuthenticator* self, bool allowed) {
	self->setAllowed(allowed);
}

bool QWebSocketCorsAuthenticator_allowed(const QWebSocketCorsAuthenticator* self) {
	return self->allowed();
}

void QWebSocketCorsAuthenticator_delete(QWebSocketCorsAuthenticator* self) {
	delete self;
}

