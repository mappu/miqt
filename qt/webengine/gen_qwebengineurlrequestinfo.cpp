#include <QByteArray>
#include <QUrl>
#include <QWebEngineUrlRequestInfo>
#include <qwebengineurlrequestinfo.h>
#include "gen_qwebengineurlrequestinfo.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QWebEngineUrlRequestInfo_resourceType(const QWebEngineUrlRequestInfo* self) {
	QWebEngineUrlRequestInfo::ResourceType _ret = self->resourceType();
	return static_cast<int>(_ret);
}

int QWebEngineUrlRequestInfo_navigationType(const QWebEngineUrlRequestInfo* self) {
	QWebEngineUrlRequestInfo::NavigationType _ret = self->navigationType();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineUrlRequestInfo_requestUrl(const QWebEngineUrlRequestInfo* self) {
	return new QUrl(self->requestUrl());
}

QUrl* QWebEngineUrlRequestInfo_firstPartyUrl(const QWebEngineUrlRequestInfo* self) {
	return new QUrl(self->firstPartyUrl());
}

QUrl* QWebEngineUrlRequestInfo_initiator(const QWebEngineUrlRequestInfo* self) {
	return new QUrl(self->initiator());
}

struct miqt_string QWebEngineUrlRequestInfo_requestMethod(const QWebEngineUrlRequestInfo* self) {
	QByteArray _qb = self->requestMethod();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlRequestInfo_changed(const QWebEngineUrlRequestInfo* self) {
	return self->changed();
}

void QWebEngineUrlRequestInfo_block(QWebEngineUrlRequestInfo* self, bool shouldBlock) {
	self->block(shouldBlock);
}

void QWebEngineUrlRequestInfo_redirect(QWebEngineUrlRequestInfo* self, QUrl* url) {
	self->redirect(*url);
}

void QWebEngineUrlRequestInfo_setHttpHeader(QWebEngineUrlRequestInfo* self, struct miqt_string name, struct miqt_string value) {
	QByteArray name_QByteArray(name.data, name.len);
	QByteArray value_QByteArray(value.data, value.len);
	self->setHttpHeader(name_QByteArray, value_QByteArray);
}

