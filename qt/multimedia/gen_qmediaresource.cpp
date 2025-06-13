#include <QMediaResource>
#include <QNetworkRequest>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qmediaresource.h>
#include "gen_qmediaresource.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaResource* QMediaResource_new() {
	return new (std::nothrow) QMediaResource();
}

QMediaResource* QMediaResource_new2(QUrl* url) {
	return new (std::nothrow) QMediaResource(*url);
}

QMediaResource* QMediaResource_new3(QNetworkRequest* request) {
	return new (std::nothrow) QMediaResource(*request);
}

QMediaResource* QMediaResource_new4(QMediaResource* other) {
	return new (std::nothrow) QMediaResource(*other);
}

QMediaResource* QMediaResource_new5(QUrl* url, struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	return new (std::nothrow) QMediaResource(*url, mimeType_QString);
}

QMediaResource* QMediaResource_new6(QNetworkRequest* request, struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	return new (std::nothrow) QMediaResource(*request, mimeType_QString);
}

void QMediaResource_operatorAssign(QMediaResource* self, QMediaResource* other) {
	self->operator=(*other);
}

bool QMediaResource_isNull(const QMediaResource* self) {
	return self->isNull();
}

bool QMediaResource_operatorEqual(const QMediaResource* self, QMediaResource* other) {
	return (*self == *other);
}

bool QMediaResource_operatorNotEqual(const QMediaResource* self, QMediaResource* other) {
	return (*self != *other);
}

QUrl* QMediaResource_url(const QMediaResource* self) {
	return new QUrl(self->url());
}

QNetworkRequest* QMediaResource_request(const QMediaResource* self) {
	return new QNetworkRequest(self->request());
}

struct miqt_string QMediaResource_mimeType(const QMediaResource* self) {
	QString _ret = self->mimeType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaResource_language(const QMediaResource* self) {
	QString _ret = self->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaResource_setLanguage(QMediaResource* self, struct miqt_string language) {
	QString language_QString = QString::fromUtf8(language.data, language.len);
	self->setLanguage(language_QString);
}

struct miqt_string QMediaResource_audioCodec(const QMediaResource* self) {
	QString _ret = self->audioCodec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaResource_setAudioCodec(QMediaResource* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setAudioCodec(codec_QString);
}

struct miqt_string QMediaResource_videoCodec(const QMediaResource* self) {
	QString _ret = self->videoCodec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaResource_setVideoCodec(QMediaResource* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setVideoCodec(codec_QString);
}

long long QMediaResource_dataSize(const QMediaResource* self) {
	qint64 _ret = self->dataSize();
	return static_cast<long long>(_ret);
}

void QMediaResource_setDataSize(QMediaResource* self, const long long size) {
	self->setDataSize(static_cast<const qint64>(size));
}

int QMediaResource_audioBitRate(const QMediaResource* self) {
	return self->audioBitRate();
}

void QMediaResource_setAudioBitRate(QMediaResource* self, int rate) {
	self->setAudioBitRate(static_cast<int>(rate));
}

int QMediaResource_sampleRate(const QMediaResource* self) {
	return self->sampleRate();
}

void QMediaResource_setSampleRate(QMediaResource* self, int frequency) {
	self->setSampleRate(static_cast<int>(frequency));
}

int QMediaResource_channelCount(const QMediaResource* self) {
	return self->channelCount();
}

void QMediaResource_setChannelCount(QMediaResource* self, int channels) {
	self->setChannelCount(static_cast<int>(channels));
}

int QMediaResource_videoBitRate(const QMediaResource* self) {
	return self->videoBitRate();
}

void QMediaResource_setVideoBitRate(QMediaResource* self, int rate) {
	self->setVideoBitRate(static_cast<int>(rate));
}

QSize* QMediaResource_resolution(const QMediaResource* self) {
	return new QSize(self->resolution());
}

void QMediaResource_setResolution(QMediaResource* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QMediaResource_setResolution2(QMediaResource* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

void QMediaResource_delete(QMediaResource* self) {
	delete self;
}

