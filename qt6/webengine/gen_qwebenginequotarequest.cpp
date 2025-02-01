#include <QUrl>
#include <QWebEngineQuotaRequest>
#include <qwebenginequotarequest.h>
#include "gen_qwebenginequotarequest.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new() {
	return new QWebEngineQuotaRequest();
}

QWebEngineQuotaRequest* QWebEngineQuotaRequest_new2(QWebEngineQuotaRequest* param1) {
	return new QWebEngineQuotaRequest(*param1);
}

void QWebEngineQuotaRequest_accept(QWebEngineQuotaRequest* self) {
	self->accept();
}

void QWebEngineQuotaRequest_reject(QWebEngineQuotaRequest* self) {
	self->reject();
}

QUrl* QWebEngineQuotaRequest_origin(const QWebEngineQuotaRequest* self) {
	return new QUrl(self->origin());
}

long long QWebEngineQuotaRequest_requestedSize(const QWebEngineQuotaRequest* self) {
	qint64 _ret = self->requestedSize();
	return static_cast<long long>(_ret);
}

bool QWebEngineQuotaRequest_operatorEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that) {
	return (*self == *that);
}

bool QWebEngineQuotaRequest_operatorNotEqual(const QWebEngineQuotaRequest* self, QWebEngineQuotaRequest* that) {
	return (*self != *that);
}

void QWebEngineQuotaRequest_delete(QWebEngineQuotaRequest* self) {
	delete self;
}

