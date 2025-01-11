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
	return new QMediaResource();
}

QMediaResource* QMediaResource_new2(QUrl* url) {
	return new QMediaResource(*url);
}

QMediaResource* QMediaResource_new3(QNetworkRequest* request) {
	return new QMediaResource(*request);
}

QMediaResource* QMediaResource_new4(QMediaResource* other) {
	return new QMediaResource(*other);
}

QMediaResource* QMediaResource_new5(QUrl* url, struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	return new QMediaResource(*url, mimeType_QString);
}

QMediaResource* QMediaResource_new6(QNetworkRequest* request, struct miqt_string mimeType) {
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	return new QMediaResource(*request, mimeType_QString);
}

void QMediaResource_OperatorAssign(QMediaResource* self, QMediaResource* other) {
	self->operator=(*other);
}

bool QMediaResource_IsNull(const QMediaResource* self) {
	return self->isNull();
}

bool QMediaResource_OperatorEqual(const QMediaResource* self, QMediaResource* other) {
	return (*self == *other);
}

bool QMediaResource_OperatorNotEqual(const QMediaResource* self, QMediaResource* other) {
	return (*self != *other);
}

QUrl* QMediaResource_Url(const QMediaResource* self) {
	return new QUrl(self->url());
}

QNetworkRequest* QMediaResource_Request(const QMediaResource* self) {
	return new QNetworkRequest(self->request());
}

struct miqt_string QMediaResource_MimeType(const QMediaResource* self) {
	QString _ret = self->mimeType();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaResource_Language(const QMediaResource* self) {
	QString _ret = self->language();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaResource_SetLanguage(QMediaResource* self, struct miqt_string language) {
	QString language_QString = QString::fromUtf8(language.data, language.len);
	self->setLanguage(language_QString);
}

struct miqt_string QMediaResource_AudioCodec(const QMediaResource* self) {
	QString _ret = self->audioCodec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaResource_SetAudioCodec(QMediaResource* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setAudioCodec(codec_QString);
}

struct miqt_string QMediaResource_VideoCodec(const QMediaResource* self) {
	QString _ret = self->videoCodec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaResource_SetVideoCodec(QMediaResource* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setVideoCodec(codec_QString);
}

long long QMediaResource_DataSize(const QMediaResource* self) {
	qint64 _ret = self->dataSize();
	return static_cast<long long>(_ret);
}

void QMediaResource_SetDataSize(QMediaResource* self, const long long size) {
	self->setDataSize(static_cast<const qint64>(size));
}

int QMediaResource_AudioBitRate(const QMediaResource* self) {
	return self->audioBitRate();
}

void QMediaResource_SetAudioBitRate(QMediaResource* self, int rate) {
	self->setAudioBitRate(static_cast<int>(rate));
}

int QMediaResource_SampleRate(const QMediaResource* self) {
	return self->sampleRate();
}

void QMediaResource_SetSampleRate(QMediaResource* self, int frequency) {
	self->setSampleRate(static_cast<int>(frequency));
}

int QMediaResource_ChannelCount(const QMediaResource* self) {
	return self->channelCount();
}

void QMediaResource_SetChannelCount(QMediaResource* self, int channels) {
	self->setChannelCount(static_cast<int>(channels));
}

int QMediaResource_VideoBitRate(const QMediaResource* self) {
	return self->videoBitRate();
}

void QMediaResource_SetVideoBitRate(QMediaResource* self, int rate) {
	self->setVideoBitRate(static_cast<int>(rate));
}

QSize* QMediaResource_Resolution(const QMediaResource* self) {
	return new QSize(self->resolution());
}

void QMediaResource_SetResolution(QMediaResource* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QMediaResource_SetResolution2(QMediaResource* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

void QMediaResource_Delete(QMediaResource* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaResource*>( self );
	} else {
		delete self;
	}
}

