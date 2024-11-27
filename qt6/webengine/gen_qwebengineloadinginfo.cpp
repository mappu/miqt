#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineLoadingInfo>
#include <qwebengineloadinginfo.h>
#include "gen_qwebengineloadinginfo.h"
#include "_cgo_export.h"

void QWebEngineLoadingInfo_new(QWebEngineLoadingInfo* other, QWebEngineLoadingInfo** outptr_QWebEngineLoadingInfo) {
	QWebEngineLoadingInfo* ret = new QWebEngineLoadingInfo(*other);
	*outptr_QWebEngineLoadingInfo = ret;
}

void QWebEngineLoadingInfo_OperatorAssign(QWebEngineLoadingInfo* self, QWebEngineLoadingInfo* other) {
	self->operator=(*other);
}

QUrl* QWebEngineLoadingInfo_Url(const QWebEngineLoadingInfo* self) {
	return new QUrl(self->url());
}

bool QWebEngineLoadingInfo_IsErrorPage(const QWebEngineLoadingInfo* self) {
	return self->isErrorPage();
}

int QWebEngineLoadingInfo_Status(const QWebEngineLoadingInfo* self) {
	QWebEngineLoadingInfo::LoadStatus _ret = self->status();
	return static_cast<int>(_ret);
}

struct miqt_string QWebEngineLoadingInfo_ErrorString(const QWebEngineLoadingInfo* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QWebEngineLoadingInfo_ErrorDomain(const QWebEngineLoadingInfo* self) {
	QWebEngineLoadingInfo::ErrorDomain _ret = self->errorDomain();
	return static_cast<int>(_ret);
}

int QWebEngineLoadingInfo_ErrorCode(const QWebEngineLoadingInfo* self) {
	return self->errorCode();
}

void QWebEngineLoadingInfo_Delete(QWebEngineLoadingInfo* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineLoadingInfo*>( self );
	} else {
		delete self;
	}
}

