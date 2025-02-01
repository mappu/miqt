#include <QUrl>
#include <QWebEngineFullScreenRequest>
#include <qwebenginefullscreenrequest.h>
#include "gen_qwebenginefullscreenrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineFullScreenRequest* QWebEngineFullScreenRequest_new(QWebEngineFullScreenRequest* param1) {
	return new QWebEngineFullScreenRequest(*param1);
}

void QWebEngineFullScreenRequest_reject(QWebEngineFullScreenRequest* self) {
	self->reject();
}

void QWebEngineFullScreenRequest_accept(QWebEngineFullScreenRequest* self) {
	self->accept();
}

bool QWebEngineFullScreenRequest_toggleOn(const QWebEngineFullScreenRequest* self) {
	return self->toggleOn();
}

QUrl* QWebEngineFullScreenRequest_origin(const QWebEngineFullScreenRequest* self) {
	const QUrl& _ret = self->origin();
	// Cast returned reference into pointer
	return const_cast<QUrl*>(&_ret);
}

void QWebEngineFullScreenRequest_delete(QWebEngineFullScreenRequest* self) {
	delete self;
}

