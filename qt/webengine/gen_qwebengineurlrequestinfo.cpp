#include <QByteArray>
#include <QUrl>
#include <QWebEngineUrlRequestInfo>
#include <qwebengineurlrequestinfo.h>
#include "gen_qwebengineurlrequestinfo.h"
#include "_cgo_export.h"

int QWebEngineUrlRequestInfo_ResourceType(const QWebEngineUrlRequestInfo* self) {
	QWebEngineUrlRequestInfo::ResourceType _ret = self->resourceType();
	return static_cast<int>(_ret);
}

int QWebEngineUrlRequestInfo_NavigationType(const QWebEngineUrlRequestInfo* self) {
	QWebEngineUrlRequestInfo::NavigationType _ret = self->navigationType();
	return static_cast<int>(_ret);
}

QUrl* QWebEngineUrlRequestInfo_RequestUrl(const QWebEngineUrlRequestInfo* self) {
	return new QUrl(self->requestUrl());
}

QUrl* QWebEngineUrlRequestInfo_FirstPartyUrl(const QWebEngineUrlRequestInfo* self) {
	return new QUrl(self->firstPartyUrl());
}

QUrl* QWebEngineUrlRequestInfo_Initiator(const QWebEngineUrlRequestInfo* self) {
	return new QUrl(self->initiator());
}

struct miqt_string QWebEngineUrlRequestInfo_RequestMethod(const QWebEngineUrlRequestInfo* self) {
	QByteArray _qb = self->requestMethod();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlRequestInfo_Changed(const QWebEngineUrlRequestInfo* self) {
	return self->changed();
}

void QWebEngineUrlRequestInfo_Block(QWebEngineUrlRequestInfo* self, bool shouldBlock) {
	self->block(shouldBlock);
}

void QWebEngineUrlRequestInfo_Redirect(QWebEngineUrlRequestInfo* self, QUrl* url) {
	self->redirect(*url);
}

void QWebEngineUrlRequestInfo_SetHttpHeader(QWebEngineUrlRequestInfo* self, struct miqt_string name, struct miqt_string value) {
	QByteArray name_QByteArray(name.data, name.len);
	QByteArray value_QByteArray(value.data, value.len);
	self->setHttpHeader(name_QByteArray, value_QByteArray);
}

