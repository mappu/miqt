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

QWebEngineFullScreenRequest* QWebEngineFullScreenRequest_new(QWebEngineFullScreenRequest* other) {
	return new QWebEngineFullScreenRequest(*other);
}

void QWebEngineFullScreenRequest_operatorAssign(QWebEngineFullScreenRequest* self, QWebEngineFullScreenRequest* other) {
	self->operator=(*other);
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
	return new QUrl(self->origin());
}

void QWebEngineFullScreenRequest_delete(QWebEngineFullScreenRequest* self) {
	delete self;
}

