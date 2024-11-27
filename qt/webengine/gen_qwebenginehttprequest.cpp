#include <QByteArray>
#include <QList>
#include <QMap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWebEngineHttpRequest>
#include <qwebenginehttprequest.h>
#include "gen_qwebenginehttprequest.h"
#include "_cgo_export.h"

void QWebEngineHttpRequest_new(QWebEngineHttpRequest** outptr_QWebEngineHttpRequest) {
	QWebEngineHttpRequest* ret = new QWebEngineHttpRequest();
	*outptr_QWebEngineHttpRequest = ret;
}

void QWebEngineHttpRequest_new2(QWebEngineHttpRequest* other, QWebEngineHttpRequest** outptr_QWebEngineHttpRequest) {
	QWebEngineHttpRequest* ret = new QWebEngineHttpRequest(*other);
	*outptr_QWebEngineHttpRequest = ret;
}

void QWebEngineHttpRequest_new3(QUrl* url, QWebEngineHttpRequest** outptr_QWebEngineHttpRequest) {
	QWebEngineHttpRequest* ret = new QWebEngineHttpRequest(*url);
	*outptr_QWebEngineHttpRequest = ret;
}

void QWebEngineHttpRequest_new4(QUrl* url, int* method, QWebEngineHttpRequest** outptr_QWebEngineHttpRequest) {
	QWebEngineHttpRequest* ret = new QWebEngineHttpRequest(*url, (const QWebEngineHttpRequest::Method&)(*method));
	*outptr_QWebEngineHttpRequest = ret;
}

void QWebEngineHttpRequest_OperatorAssign(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other) {
	self->operator=(*other);
}

QWebEngineHttpRequest* QWebEngineHttpRequest_PostRequest(QUrl* url, struct miqt_map /* of struct miqt_string to struct miqt_string */  postData) {
	QMap<QString, QString> postData_QMap;
	struct miqt_string* postData_karr = static_cast<struct miqt_string*>(postData.keys);
	struct miqt_string* postData_varr = static_cast<struct miqt_string*>(postData.values);
	for(size_t i = 0; i < postData.len; ++i) {
		QString postData_karr_i_QString = QString::fromUtf8(postData_karr[i].data, postData_karr[i].len);
		QString postData_varr_i_QString = QString::fromUtf8(postData_varr[i].data, postData_varr[i].len);
		postData_QMap[postData_karr_i_QString] = postData_varr_i_QString;
	}
	return new QWebEngineHttpRequest(QWebEngineHttpRequest::postRequest(*url, postData_QMap));
}

void QWebEngineHttpRequest_Swap(QWebEngineHttpRequest* self, QWebEngineHttpRequest* other) {
	self->swap(*other);
}

bool QWebEngineHttpRequest_OperatorEqual(const QWebEngineHttpRequest* self, QWebEngineHttpRequest* other) {
	return (*self == *other);
}

bool QWebEngineHttpRequest_OperatorNotEqual(const QWebEngineHttpRequest* self, QWebEngineHttpRequest* other) {
	return (*self != *other);
}

int QWebEngineHttpRequest_Method(const QWebEngineHttpRequest* self) {
	QWebEngineHttpRequest::Method _ret = self->method();
	return static_cast<int>(_ret);
}

void QWebEngineHttpRequest_SetMethod(QWebEngineHttpRequest* self, int method) {
	self->setMethod(static_cast<QWebEngineHttpRequest::Method>(method));
}

QUrl* QWebEngineHttpRequest_Url(const QWebEngineHttpRequest* self) {
	return new QUrl(self->url());
}

void QWebEngineHttpRequest_SetUrl(QWebEngineHttpRequest* self, QUrl* url) {
	self->setUrl(*url);
}

struct miqt_string QWebEngineHttpRequest_PostData(const QWebEngineHttpRequest* self) {
	QByteArray _qb = self->postData();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QWebEngineHttpRequest_SetPostData(QWebEngineHttpRequest* self, struct miqt_string postData) {
	QByteArray postData_QByteArray(postData.data, postData.len);
	self->setPostData(postData_QByteArray);
}

bool QWebEngineHttpRequest_HasHeader(const QWebEngineHttpRequest* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	return self->hasHeader(headerName_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QWebEngineHttpRequest_Headers(const QWebEngineHttpRequest* self) {
	QVector<QByteArray> _ret = self->headers();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _vv_qb = _ret[i];
		struct miqt_string _vv_ms;
		_vv_ms.len = _vv_qb.length();
		_vv_ms.data = static_cast<char*>(malloc(_vv_ms.len));
		memcpy(_vv_ms.data, _vv_qb.data(), _vv_ms.len);
		_arr[i] = _vv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QWebEngineHttpRequest_Header(const QWebEngineHttpRequest* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray _qb = self->header(headerName_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QWebEngineHttpRequest_SetHeader(QWebEngineHttpRequest* self, struct miqt_string headerName, struct miqt_string value) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray value_QByteArray(value.data, value.len);
	self->setHeader(headerName_QByteArray, value_QByteArray);
}

void QWebEngineHttpRequest_UnsetHeader(QWebEngineHttpRequest* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	self->unsetHeader(headerName_QByteArray);
}

void QWebEngineHttpRequest_Delete(QWebEngineHttpRequest* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineHttpRequest*>( self );
	} else {
		delete self;
	}
}

