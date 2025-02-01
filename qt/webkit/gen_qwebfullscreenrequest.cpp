#include <QUrl>
#include <QWebElement>
#include <QWebFullScreenRequest>
#include <qwebfullscreenrequest.h>
#include "gen_qwebfullscreenrequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebFullScreenRequest* QWebFullScreenRequest_new() {
	return new QWebFullScreenRequest();
}

QWebFullScreenRequest* QWebFullScreenRequest_new2(QWebFullScreenRequest* param1) {
	return new QWebFullScreenRequest(*param1);
}

void QWebFullScreenRequest_accept(QWebFullScreenRequest* self) {
	self->accept();
}

void QWebFullScreenRequest_reject(QWebFullScreenRequest* self) {
	self->reject();
}

bool QWebFullScreenRequest_toggleOn(const QWebFullScreenRequest* self) {
	return self->toggleOn();
}

QUrl* QWebFullScreenRequest_origin(const QWebFullScreenRequest* self) {
	return new QUrl(self->origin());
}

QWebElement* QWebFullScreenRequest_element(const QWebFullScreenRequest* self) {
	const QWebElement& _ret = self->element();
	// Cast returned reference into pointer
	return const_cast<QWebElement*>(&_ret);
}

void QWebFullScreenRequest_delete(QWebFullScreenRequest* self) {
	delete self;
}

