#include <QAudioEncoderSettings>
#include <QImageEncoderSettings>
#include <QMap>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVideoEncoderSettings>
#include <qmediaencodersettings.h>
#include "gen_qmediaencodersettings.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QAudioEncoderSettings* QAudioEncoderSettings_new() {
	return new QAudioEncoderSettings();
}

QAudioEncoderSettings* QAudioEncoderSettings_new2(QAudioEncoderSettings* other) {
	return new QAudioEncoderSettings(*other);
}

void QAudioEncoderSettings_operatorAssign(QAudioEncoderSettings* self, QAudioEncoderSettings* other) {
	self->operator=(*other);
}

bool QAudioEncoderSettings_operatorEqual(const QAudioEncoderSettings* self, QAudioEncoderSettings* other) {
	return (*self == *other);
}

bool QAudioEncoderSettings_operatorNotEqual(const QAudioEncoderSettings* self, QAudioEncoderSettings* other) {
	return (*self != *other);
}

bool QAudioEncoderSettings_isNull(const QAudioEncoderSettings* self) {
	return self->isNull();
}

int QAudioEncoderSettings_encodingMode(const QAudioEncoderSettings* self) {
	QMultimedia::EncodingMode _ret = self->encodingMode();
	return static_cast<int>(_ret);
}

void QAudioEncoderSettings_setEncodingMode(QAudioEncoderSettings* self, int encodingMode) {
	self->setEncodingMode(static_cast<QMultimedia::EncodingMode>(encodingMode));
}

struct miqt_string QAudioEncoderSettings_codec(const QAudioEncoderSettings* self) {
	QString _ret = self->codec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAudioEncoderSettings_setCodec(QAudioEncoderSettings* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setCodec(codec_QString);
}

int QAudioEncoderSettings_bitRate(const QAudioEncoderSettings* self) {
	return self->bitRate();
}

void QAudioEncoderSettings_setBitRate(QAudioEncoderSettings* self, int bitrate) {
	self->setBitRate(static_cast<int>(bitrate));
}

int QAudioEncoderSettings_channelCount(const QAudioEncoderSettings* self) {
	return self->channelCount();
}

void QAudioEncoderSettings_setChannelCount(QAudioEncoderSettings* self, int channels) {
	self->setChannelCount(static_cast<int>(channels));
}

int QAudioEncoderSettings_sampleRate(const QAudioEncoderSettings* self) {
	return self->sampleRate();
}

void QAudioEncoderSettings_setSampleRate(QAudioEncoderSettings* self, int rate) {
	self->setSampleRate(static_cast<int>(rate));
}

int QAudioEncoderSettings_quality(const QAudioEncoderSettings* self) {
	QMultimedia::EncodingQuality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QAudioEncoderSettings_setQuality(QAudioEncoderSettings* self, int quality) {
	self->setQuality(static_cast<QMultimedia::EncodingQuality>(quality));
}

QVariant* QAudioEncoderSettings_encodingOption(const QAudioEncoderSettings* self, struct miqt_string option) {
	QString option_QString = QString::fromUtf8(option.data, option.len);
	return new QVariant(self->encodingOption(option_QString));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QAudioEncoderSettings_encodingOptions(const QAudioEncoderSettings* self) {
	QVariantMap _ret = self->encodingOptions();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QAudioEncoderSettings_setEncodingOption(QAudioEncoderSettings* self, struct miqt_string option, QVariant* value) {
	QString option_QString = QString::fromUtf8(option.data, option.len);
	self->setEncodingOption(option_QString, *value);
}

void QAudioEncoderSettings_setEncodingOptions(QAudioEncoderSettings* self, struct miqt_map /* of struct miqt_string to QVariant* */  options) {
	QVariantMap options_QMap;
	struct miqt_string* options_karr = static_cast<struct miqt_string*>(options.keys);
	QVariant** options_varr = static_cast<QVariant**>(options.values);
	for(size_t i = 0; i < options.len; ++i) {
		QString options_karr_i_QString = QString::fromUtf8(options_karr[i].data, options_karr[i].len);
		options_QMap[options_karr_i_QString] = *(options_varr[i]);
	}
	self->setEncodingOptions(options_QMap);
}

void QAudioEncoderSettings_delete(QAudioEncoderSettings* self) {
	delete self;
}

QVideoEncoderSettings* QVideoEncoderSettings_new() {
	return new QVideoEncoderSettings();
}

QVideoEncoderSettings* QVideoEncoderSettings_new2(QVideoEncoderSettings* other) {
	return new QVideoEncoderSettings(*other);
}

void QVideoEncoderSettings_operatorAssign(QVideoEncoderSettings* self, QVideoEncoderSettings* other) {
	self->operator=(*other);
}

bool QVideoEncoderSettings_operatorEqual(const QVideoEncoderSettings* self, QVideoEncoderSettings* other) {
	return (*self == *other);
}

bool QVideoEncoderSettings_operatorNotEqual(const QVideoEncoderSettings* self, QVideoEncoderSettings* other) {
	return (*self != *other);
}

bool QVideoEncoderSettings_isNull(const QVideoEncoderSettings* self) {
	return self->isNull();
}

int QVideoEncoderSettings_encodingMode(const QVideoEncoderSettings* self) {
	QMultimedia::EncodingMode _ret = self->encodingMode();
	return static_cast<int>(_ret);
}

void QVideoEncoderSettings_setEncodingMode(QVideoEncoderSettings* self, int encodingMode) {
	self->setEncodingMode(static_cast<QMultimedia::EncodingMode>(encodingMode));
}

struct miqt_string QVideoEncoderSettings_codec(const QVideoEncoderSettings* self) {
	QString _ret = self->codec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QVideoEncoderSettings_setCodec(QVideoEncoderSettings* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setCodec(codec_QString);
}

QSize* QVideoEncoderSettings_resolution(const QVideoEncoderSettings* self) {
	return new QSize(self->resolution());
}

void QVideoEncoderSettings_setResolution(QVideoEncoderSettings* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QVideoEncoderSettings_setResolution2(QVideoEncoderSettings* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

double QVideoEncoderSettings_frameRate(const QVideoEncoderSettings* self) {
	qreal _ret = self->frameRate();
	return static_cast<double>(_ret);
}

void QVideoEncoderSettings_setFrameRate(QVideoEncoderSettings* self, double rate) {
	self->setFrameRate(static_cast<qreal>(rate));
}

int QVideoEncoderSettings_bitRate(const QVideoEncoderSettings* self) {
	return self->bitRate();
}

void QVideoEncoderSettings_setBitRate(QVideoEncoderSettings* self, int bitrate) {
	self->setBitRate(static_cast<int>(bitrate));
}

int QVideoEncoderSettings_quality(const QVideoEncoderSettings* self) {
	QMultimedia::EncodingQuality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QVideoEncoderSettings_setQuality(QVideoEncoderSettings* self, int quality) {
	self->setQuality(static_cast<QMultimedia::EncodingQuality>(quality));
}

QVariant* QVideoEncoderSettings_encodingOption(const QVideoEncoderSettings* self, struct miqt_string option) {
	QString option_QString = QString::fromUtf8(option.data, option.len);
	return new QVariant(self->encodingOption(option_QString));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QVideoEncoderSettings_encodingOptions(const QVideoEncoderSettings* self) {
	QVariantMap _ret = self->encodingOptions();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QVideoEncoderSettings_setEncodingOption(QVideoEncoderSettings* self, struct miqt_string option, QVariant* value) {
	QString option_QString = QString::fromUtf8(option.data, option.len);
	self->setEncodingOption(option_QString, *value);
}

void QVideoEncoderSettings_setEncodingOptions(QVideoEncoderSettings* self, struct miqt_map /* of struct miqt_string to QVariant* */  options) {
	QVariantMap options_QMap;
	struct miqt_string* options_karr = static_cast<struct miqt_string*>(options.keys);
	QVariant** options_varr = static_cast<QVariant**>(options.values);
	for(size_t i = 0; i < options.len; ++i) {
		QString options_karr_i_QString = QString::fromUtf8(options_karr[i].data, options_karr[i].len);
		options_QMap[options_karr_i_QString] = *(options_varr[i]);
	}
	self->setEncodingOptions(options_QMap);
}

void QVideoEncoderSettings_delete(QVideoEncoderSettings* self) {
	delete self;
}

QImageEncoderSettings* QImageEncoderSettings_new() {
	return new QImageEncoderSettings();
}

QImageEncoderSettings* QImageEncoderSettings_new2(QImageEncoderSettings* other) {
	return new QImageEncoderSettings(*other);
}

void QImageEncoderSettings_operatorAssign(QImageEncoderSettings* self, QImageEncoderSettings* other) {
	self->operator=(*other);
}

bool QImageEncoderSettings_operatorEqual(const QImageEncoderSettings* self, QImageEncoderSettings* other) {
	return (*self == *other);
}

bool QImageEncoderSettings_operatorNotEqual(const QImageEncoderSettings* self, QImageEncoderSettings* other) {
	return (*self != *other);
}

bool QImageEncoderSettings_isNull(const QImageEncoderSettings* self) {
	return self->isNull();
}

struct miqt_string QImageEncoderSettings_codec(const QImageEncoderSettings* self) {
	QString _ret = self->codec();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QImageEncoderSettings_setCodec(QImageEncoderSettings* self, struct miqt_string codec) {
	QString codec_QString = QString::fromUtf8(codec.data, codec.len);
	self->setCodec(codec_QString);
}

QSize* QImageEncoderSettings_resolution(const QImageEncoderSettings* self) {
	return new QSize(self->resolution());
}

void QImageEncoderSettings_setResolution(QImageEncoderSettings* self, QSize* resolution) {
	self->setResolution(*resolution);
}

void QImageEncoderSettings_setResolution2(QImageEncoderSettings* self, int width, int height) {
	self->setResolution(static_cast<int>(width), static_cast<int>(height));
}

int QImageEncoderSettings_quality(const QImageEncoderSettings* self) {
	QMultimedia::EncodingQuality _ret = self->quality();
	return static_cast<int>(_ret);
}

void QImageEncoderSettings_setQuality(QImageEncoderSettings* self, int quality) {
	self->setQuality(static_cast<QMultimedia::EncodingQuality>(quality));
}

QVariant* QImageEncoderSettings_encodingOption(const QImageEncoderSettings* self, struct miqt_string option) {
	QString option_QString = QString::fromUtf8(option.data, option.len);
	return new QVariant(self->encodingOption(option_QString));
}

struct miqt_map /* of struct miqt_string to QVariant* */  QImageEncoderSettings_encodingOptions(const QImageEncoderSettings* self) {
	QVariantMap _ret = self->encodingOptions();
	// Convert QMap<> from C++ memory to manually-managed C memory
	struct miqt_string* _karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QString _mapkey_ret = _itr->first;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _mapkey_b = _mapkey_ret.toUtf8();
		struct miqt_string _mapkey_ms;
		_mapkey_ms.len = _mapkey_b.length();
		_mapkey_ms.data = static_cast<char*>(malloc(_mapkey_ms.len));
		memcpy(_mapkey_ms.data, _mapkey_b.data(), _mapkey_ms.len);
		_karr[_ctr] = _mapkey_ms;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QImageEncoderSettings_setEncodingOption(QImageEncoderSettings* self, struct miqt_string option, QVariant* value) {
	QString option_QString = QString::fromUtf8(option.data, option.len);
	self->setEncodingOption(option_QString, *value);
}

void QImageEncoderSettings_setEncodingOptions(QImageEncoderSettings* self, struct miqt_map /* of struct miqt_string to QVariant* */  options) {
	QVariantMap options_QMap;
	struct miqt_string* options_karr = static_cast<struct miqt_string*>(options.keys);
	QVariant** options_varr = static_cast<QVariant**>(options.values);
	for(size_t i = 0; i < options.len; ++i) {
		QString options_karr_i_QString = QString::fromUtf8(options_karr[i].data, options_karr[i].len);
		options_QMap[options_karr_i_QString] = *(options_varr[i]);
	}
	self->setEncodingOptions(options_QMap);
}

void QImageEncoderSettings_delete(QImageEncoderSettings* self) {
	delete self;
}

