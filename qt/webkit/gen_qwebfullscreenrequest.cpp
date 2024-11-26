#include <QUrl>
#include <QWebElement>
#include <QWebFullScreenRequest>
#include <qwebfullscreenrequest.h>
#include "gen_qwebfullscreenrequest.h"
#include "_cgo_export.h"

void QWebFullScreenRequest_new(QWebFullScreenRequest** outptr_QWebFullScreenRequest) {
	QWebFullScreenRequest* ret = new QWebFullScreenRequest();
	*outptr_QWebFullScreenRequest = ret;
}

void QWebFullScreenRequest_new2(QWebFullScreenRequest* param1, QWebFullScreenRequest** outptr_QWebFullScreenRequest) {
	QWebFullScreenRequest* ret = new QWebFullScreenRequest(*param1);
	*outptr_QWebFullScreenRequest = ret;
}

void QWebFullScreenRequest_Accept(QWebFullScreenRequest* self) {
	self->accept();
}

void QWebFullScreenRequest_Reject(QWebFullScreenRequest* self) {
	self->reject();
}

bool QWebFullScreenRequest_ToggleOn(const QWebFullScreenRequest* self) {
	return self->toggleOn();
}

QUrl* QWebFullScreenRequest_Origin(const QWebFullScreenRequest* self) {
	return new QUrl(self->origin());
}

QWebElement* QWebFullScreenRequest_Element(const QWebFullScreenRequest* self) {
	const QWebElement& _ret = self->element();
	// Cast returned reference into pointer
	return const_cast<QWebElement*>(&_ret);
}

void QWebFullScreenRequest_Delete(QWebFullScreenRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebFullScreenRequest*>( self );
	} else {
		delete self;
	}
}

