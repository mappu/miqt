#include <QUrl>
#include <QWebEngineFullScreenRequest>
#include <qwebenginefullscreenrequest.h>
#include "gen_qwebenginefullscreenrequest.h"
#include "_cgo_export.h"

void QWebEngineFullScreenRequest_new(QWebEngineFullScreenRequest* other, QWebEngineFullScreenRequest** outptr_QWebEngineFullScreenRequest) {
	QWebEngineFullScreenRequest* ret = new QWebEngineFullScreenRequest(*other);
	*outptr_QWebEngineFullScreenRequest = ret;
}

void QWebEngineFullScreenRequest_OperatorAssign(QWebEngineFullScreenRequest* self, QWebEngineFullScreenRequest* other) {
	self->operator=(*other);
}

void QWebEngineFullScreenRequest_Reject(QWebEngineFullScreenRequest* self) {
	self->reject();
}

void QWebEngineFullScreenRequest_Accept(QWebEngineFullScreenRequest* self) {
	self->accept();
}

bool QWebEngineFullScreenRequest_ToggleOn(const QWebEngineFullScreenRequest* self) {
	return self->toggleOn();
}

QUrl* QWebEngineFullScreenRequest_Origin(const QWebEngineFullScreenRequest* self) {
	return new QUrl(self->origin());
}

void QWebEngineFullScreenRequest_Delete(QWebEngineFullScreenRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineFullScreenRequest*>( self );
	} else {
		delete self;
	}
}

