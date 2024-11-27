#include <QUrl>
#include <QWebEngineQuotaRequest>
#include <qwebenginequotarequest.h>
#include "gen_qwebenginequotarequest.h"
#include "_cgo_export.h"

void QWebEngineQuotaRequest_new(QWebEngineQuotaRequest** outptr_QWebEngineQuotaRequest) {
	QWebEngineQuotaRequest* ret = new QWebEngineQuotaRequest();
	*outptr_QWebEngineQuotaRequest = ret;
}

void QWebEngineQuotaRequest_new2(QWebEngineQuotaRequest* param1, QWebEngineQuotaRequest** outptr_QWebEngineQuotaRequest) {
	QWebEngineQuotaRequest* ret = new QWebEngineQuotaRequest(*param1);
	*outptr_QWebEngineQuotaRequest = ret;
}

void QWebEngineQuotaRequest_Accept(QWebEngineQuotaRequest* self) {
	self->accept();
}

void QWebEngineQuotaRequest_Reject(QWebEngineQuotaRequest* self) {
	self->reject();
}

QUrl* QWebEngineQuotaRequest_Origin(const QWebEngineQuotaRequest* self) {
	return new QUrl(self->origin());
}

long long QWebEngineQuotaRequest_RequestedSize(const QWebEngineQuotaRequest* self) {
	qint64 _ret = self->requestedSize();
	return static_cast<long long>(_ret);
}

bool QWebEngineQuotaRequest_OperatorEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that) {
	return (*self == *that);
}

bool QWebEngineQuotaRequest_OperatorNotEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that) {
	return (*self != *that);
}

void QWebEngineQuotaRequest_Delete(QWebEngineQuotaRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineQuotaRequest*>( self );
	} else {
		delete self;
	}
}

