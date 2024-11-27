#include <QUrl>
#include <QWebEngineFullScreenRequest>
#include <qwebenginefullscreenrequest.h>
#include "gen_qwebenginefullscreenrequest.h"
#include "_cgo_export.h"

void QWebEngineFullScreenRequest_new(QWebEngineFullScreenRequest* param1, QWebEngineFullScreenRequest** outptr_QWebEngineFullScreenRequest) {
	QWebEngineFullScreenRequest* ret = new QWebEngineFullScreenRequest(*param1);
	*outptr_QWebEngineFullScreenRequest = ret;
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
	const QUrl& _ret = self->origin();
	// Cast returned reference into pointer
	return const_cast<QUrl*>(&_ret);
}

void QWebEngineFullScreenRequest_Delete(QWebEngineFullScreenRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineFullScreenRequest*>( self );
	} else {
		delete self;
	}
}

