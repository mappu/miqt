#include <QByteArray>
#include <QIODevice>
#include <QIODeviceBase>
#include <QList>
#include <QMetaObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>
#include <QPair>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslPreSharedKeyAuthenticator>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qnetworkreply.h>
#include "gen_qnetworkreply.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QNetworkReply_SocketStartedConnecting(intptr_t);
void miqt_exec_callback_QNetworkReply_RequestSent(intptr_t);
void miqt_exec_callback_QNetworkReply_MetaDataChanged(intptr_t);
void miqt_exec_callback_QNetworkReply_Finished(intptr_t);
void miqt_exec_callback_QNetworkReply_ErrorOccurred(intptr_t, int);
void miqt_exec_callback_QNetworkReply_Encrypted(intptr_t);
void miqt_exec_callback_QNetworkReply_SslErrors(intptr_t, struct miqt_array /* of QSslError* */ );
void miqt_exec_callback_QNetworkReply_PreSharedKeyAuthenticationRequired(intptr_t, QSslPreSharedKeyAuthenticator*);
void miqt_exec_callback_QNetworkReply_Redirected(intptr_t, QUrl*);
void miqt_exec_callback_QNetworkReply_RedirectAllowed(intptr_t);
void miqt_exec_callback_QNetworkReply_UploadProgress(intptr_t, long long, long long);
void miqt_exec_callback_QNetworkReply_DownloadProgress(intptr_t, long long, long long);
#ifdef __cplusplus
} /* extern C */
#endif

void QNetworkReply_virtbase(QNetworkReply* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QNetworkReply_MetaObject(const QNetworkReply* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkReply_Metacast(QNetworkReply* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkReply_Tr(const char* s) {
	QString _ret = QNetworkReply::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkReply_Close(QNetworkReply* self) {
	self->close();
}

bool QNetworkReply_IsSequential(const QNetworkReply* self) {
	return self->isSequential();
}

long long QNetworkReply_ReadBufferSize(const QNetworkReply* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QNetworkReply_SetReadBufferSize(QNetworkReply* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

QNetworkAccessManager* QNetworkReply_Manager(const QNetworkReply* self) {
	return self->manager();
}

int QNetworkReply_Operation(const QNetworkReply* self) {
	QNetworkAccessManager::Operation _ret = self->operation();
	return static_cast<int>(_ret);
}

QNetworkRequest* QNetworkReply_Request(const QNetworkReply* self) {
	return new QNetworkRequest(self->request());
}

int QNetworkReply_Error(const QNetworkReply* self) {
	QNetworkReply::NetworkError _ret = self->error();
	return static_cast<int>(_ret);
}

bool QNetworkReply_IsFinished(const QNetworkReply* self) {
	return self->isFinished();
}

bool QNetworkReply_IsRunning(const QNetworkReply* self) {
	return self->isRunning();
}

QUrl* QNetworkReply_Url(const QNetworkReply* self) {
	return new QUrl(self->url());
}

QVariant* QNetworkReply_Header(const QNetworkReply* self, int header) {
	return new QVariant(self->header(static_cast<QNetworkRequest::KnownHeaders>(header)));
}

bool QNetworkReply_HasRawHeader(const QNetworkReply* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	return self->hasRawHeader(headerName_QByteArray);
}

struct miqt_array /* of struct miqt_string */  QNetworkReply_RawHeaderList(const QNetworkReply* self) {
	QList<QByteArray> _ret = self->rawHeaderList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QNetworkReply_RawHeader(const QNetworkReply* self, struct miqt_string headerName) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray _qb = self->rawHeader(headerName_QByteArray);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QNetworkReply_RawHeaderPairs(const QNetworkReply* self) {
	const QList<QNetworkReply::RawHeaderPair>& _ret = self->rawHeaderPairs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ * _arr = static_cast<struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ *>(malloc(sizeof(struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		struct miqt_string* _lv_first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		struct miqt_string* _lv_second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		QByteArray _lv_first_qb = _lv_ret.first;
		struct miqt_string _lv_first_ms;
		_lv_first_ms.len = _lv_first_qb.length();
		_lv_first_ms.data = static_cast<char*>(malloc(_lv_first_ms.len));
		memcpy(_lv_first_ms.data, _lv_first_qb.data(), _lv_first_ms.len);
		_lv_first_arr[0] = _lv_first_ms;
		QByteArray _lv_second_qb = _lv_ret.second;
		struct miqt_string _lv_second_ms;
		_lv_second_ms.len = _lv_second_qb.length();
		_lv_second_ms.data = static_cast<char*>(malloc(_lv_second_ms.len));
		memcpy(_lv_second_ms.data, _lv_second_qb.data(), _lv_second_ms.len);
		_lv_second_arr[0] = _lv_second_ms;
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QNetworkReply_Attribute(const QNetworkReply* self, int code) {
	return new QVariant(self->attribute(static_cast<QNetworkRequest::Attribute>(code)));
}

QSslConfiguration* QNetworkReply_SslConfiguration(const QNetworkReply* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QNetworkReply_SetSslConfiguration(QNetworkReply* self, QSslConfiguration* configuration) {
	self->setSslConfiguration(*configuration);
}

void QNetworkReply_IgnoreSslErrors(QNetworkReply* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->ignoreSslErrors(errors_QList);
}

void QNetworkReply_Abort(QNetworkReply* self) {
	self->abort();
}

void QNetworkReply_IgnoreSslErrors2(QNetworkReply* self) {
	self->ignoreSslErrors();
}

void QNetworkReply_SocketStartedConnecting(QNetworkReply* self) {
	self->socketStartedConnecting();
}

void QNetworkReply_connect_SocketStartedConnecting(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)()>(&QNetworkReply::socketStartedConnecting), self, [=]() {
		miqt_exec_callback_QNetworkReply_SocketStartedConnecting(slot);
	});
}

void QNetworkReply_RequestSent(QNetworkReply* self) {
	self->requestSent();
}

void QNetworkReply_connect_RequestSent(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)()>(&QNetworkReply::requestSent), self, [=]() {
		miqt_exec_callback_QNetworkReply_RequestSent(slot);
	});
}

void QNetworkReply_MetaDataChanged(QNetworkReply* self) {
	self->metaDataChanged();
}

void QNetworkReply_connect_MetaDataChanged(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)()>(&QNetworkReply::metaDataChanged), self, [=]() {
		miqt_exec_callback_QNetworkReply_MetaDataChanged(slot);
	});
}

void QNetworkReply_Finished(QNetworkReply* self) {
	self->finished();
}

void QNetworkReply_connect_Finished(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)()>(&QNetworkReply::finished), self, [=]() {
		miqt_exec_callback_QNetworkReply_Finished(slot);
	});
}

void QNetworkReply_ErrorOccurred(QNetworkReply* self, int param1) {
	self->errorOccurred(static_cast<QNetworkReply::NetworkError>(param1));
}

void QNetworkReply_connect_ErrorOccurred(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)(QNetworkReply::NetworkError)>(&QNetworkReply::errorOccurred), self, [=](QNetworkReply::NetworkError param1) {
		QNetworkReply::NetworkError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QNetworkReply_ErrorOccurred(slot, sigval1);
	});
}

void QNetworkReply_Encrypted(QNetworkReply* self) {
	self->encrypted();
}

void QNetworkReply_connect_Encrypted(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)()>(&QNetworkReply::encrypted), self, [=]() {
		miqt_exec_callback_QNetworkReply_Encrypted(slot);
	});
}

void QNetworkReply_SslErrors(QNetworkReply* self, struct miqt_array /* of QSslError* */  errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(errors_QList);
}

void QNetworkReply_connect_SslErrors(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)(const QList<QSslError>&)>(&QNetworkReply::sslErrors), self, [=](const QList<QSslError>& errors) {
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array /* of QSslError* */  sigval1 = errors_out;
		miqt_exec_callback_QNetworkReply_SslErrors(slot, sigval1);
	});
}

void QNetworkReply_PreSharedKeyAuthenticationRequired(QNetworkReply* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QNetworkReply_connect_PreSharedKeyAuthenticationRequired(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)(QSslPreSharedKeyAuthenticator*)>(&QNetworkReply::preSharedKeyAuthenticationRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QNetworkReply_PreSharedKeyAuthenticationRequired(slot, sigval1);
	});
}

void QNetworkReply_Redirected(QNetworkReply* self, QUrl* url) {
	self->redirected(*url);
}

void QNetworkReply_connect_Redirected(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)(const QUrl&)>(&QNetworkReply::redirected), self, [=](const QUrl& url) {
		const QUrl& url_ret = url;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
		miqt_exec_callback_QNetworkReply_Redirected(slot, sigval1);
	});
}

void QNetworkReply_RedirectAllowed(QNetworkReply* self) {
	self->redirectAllowed();
}

void QNetworkReply_connect_RedirectAllowed(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)()>(&QNetworkReply::redirectAllowed), self, [=]() {
		miqt_exec_callback_QNetworkReply_RedirectAllowed(slot);
	});
}

void QNetworkReply_UploadProgress(QNetworkReply* self, long long bytesSent, long long bytesTotal) {
	self->uploadProgress(static_cast<qint64>(bytesSent), static_cast<qint64>(bytesTotal));
}

void QNetworkReply_connect_UploadProgress(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)(qint64, qint64)>(&QNetworkReply::uploadProgress), self, [=](qint64 bytesSent, qint64 bytesTotal) {
		qint64 bytesSent_ret = bytesSent;
		long long sigval1 = static_cast<long long>(bytesSent_ret);
		qint64 bytesTotal_ret = bytesTotal;
		long long sigval2 = static_cast<long long>(bytesTotal_ret);
		miqt_exec_callback_QNetworkReply_UploadProgress(slot, sigval1, sigval2);
	});
}

void QNetworkReply_DownloadProgress(QNetworkReply* self, long long bytesReceived, long long bytesTotal) {
	self->downloadProgress(static_cast<qint64>(bytesReceived), static_cast<qint64>(bytesTotal));
}

void QNetworkReply_connect_DownloadProgress(QNetworkReply* self, intptr_t slot) {
	QNetworkReply::connect(self, static_cast<void (QNetworkReply::*)(qint64, qint64)>(&QNetworkReply::downloadProgress), self, [=](qint64 bytesReceived, qint64 bytesTotal) {
		qint64 bytesReceived_ret = bytesReceived;
		long long sigval1 = static_cast<long long>(bytesReceived_ret);
		qint64 bytesTotal_ret = bytesTotal;
		long long sigval2 = static_cast<long long>(bytesTotal_ret);
		miqt_exec_callback_QNetworkReply_DownloadProgress(slot, sigval1, sigval2);
	});
}

struct miqt_string QNetworkReply_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkReply::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkReply_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkReply::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNetworkReply_Delete(QNetworkReply* self) {
	delete self;
}

