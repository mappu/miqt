#include <QByteArray>
#include <QObject>
#include <QQmlEngine>
#include <QQmlFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qqmlfile.h>
#include "gen_qqmlfile.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlFile* QQmlFile_new() {
	return new QQmlFile();
}

QQmlFile* QQmlFile_new2(QQmlEngine* param1, QUrl* param2) {
	return new QQmlFile(param1, *param2);
}

QQmlFile* QQmlFile_new3(QQmlEngine* param1, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return new QQmlFile(param1, param2_QString);
}

bool QQmlFile_isNull(const QQmlFile* self) {
	return self->isNull();
}

bool QQmlFile_isReady(const QQmlFile* self) {
	return self->isReady();
}

bool QQmlFile_isError(const QQmlFile* self) {
	return self->isError();
}

bool QQmlFile_isLoading(const QQmlFile* self) {
	return self->isLoading();
}

QUrl* QQmlFile_url(const QQmlFile* self) {
	return new QUrl(self->url());
}

int QQmlFile_status(const QQmlFile* self) {
	QQmlFile::Status _ret = self->status();
	return static_cast<int>(_ret);
}

struct miqt_string QQmlFile_error(const QQmlFile* self) {
	QString _ret = self->error();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QQmlFile_size(const QQmlFile* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

const char* QQmlFile_data(const QQmlFile* self) {
	return (const char*) self->data();
}

struct miqt_string QQmlFile_dataByteArray(const QQmlFile* self) {
	QByteArray _qb = self->dataByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QQmlFile_load(QQmlFile* self, QQmlEngine* param1, QUrl* param2) {
	self->load(param1, *param2);
}

void QQmlFile_load2(QQmlFile* self, QQmlEngine* param1, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	self->load(param1, param2_QString);
}

void QQmlFile_clear(QQmlFile* self) {
	self->clear();
}

void QQmlFile_clearWithQObject(QQmlFile* self, QObject* param1) {
	self->clear(param1);
}

bool QQmlFile_connectFinished(QQmlFile* self, QObject* param1, const char* param2) {
	return self->connectFinished(param1, param2);
}

bool QQmlFile_connectFinished2(QQmlFile* self, QObject* param1, int param2) {
	return self->connectFinished(param1, static_cast<int>(param2));
}

bool QQmlFile_connectDownloadProgress(QQmlFile* self, QObject* param1, const char* param2) {
	return self->connectDownloadProgress(param1, param2);
}

bool QQmlFile_connectDownloadProgress2(QQmlFile* self, QObject* param1, int param2) {
	return self->connectDownloadProgress(param1, static_cast<int>(param2));
}

bool QQmlFile_isSynchronous(struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return QQmlFile::isSynchronous(url_QString);
}

bool QQmlFile_isSynchronousWithUrl(QUrl* url) {
	return QQmlFile::isSynchronous(*url);
}

bool QQmlFile_isLocalFile(struct miqt_string url) {
	QString url_QString = QString::fromUtf8(url.data, url.len);
	return QQmlFile::isLocalFile(url_QString);
}

bool QQmlFile_isLocalFileWithUrl(QUrl* url) {
	return QQmlFile::isLocalFile(*url);
}

struct miqt_string QQmlFile_urlToLocalFileOrQrc(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QString _ret = QQmlFile::urlToLocalFileOrQrc(param1_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlFile_urlToLocalFileOrQrcWithQUrl(QUrl* param1) {
	QString _ret = QQmlFile::urlToLocalFileOrQrc(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlFile_delete(QQmlFile* self) {
	delete self;
}

