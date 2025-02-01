#include <QList>
#include <QMediaFormat>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaformat.h>
#include "gen_qmediaformat.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMediaFormat* QMediaFormat_new() {
	return new QMediaFormat();
}

QMediaFormat* QMediaFormat_new2(QMediaFormat* other) {
	return new QMediaFormat(*other);
}

QMediaFormat* QMediaFormat_new3(int format) {
	return new QMediaFormat(static_cast<QMediaFormat::FileFormat>(format));
}

void QMediaFormat_operatorAssign(QMediaFormat* self, QMediaFormat* other) {
	self->operator=(*other);
}

void QMediaFormat_swap(QMediaFormat* self, QMediaFormat* other) {
	self->swap(*other);
}

int QMediaFormat_fileFormat(const QMediaFormat* self) {
	QMediaFormat::FileFormat _ret = self->fileFormat();
	return static_cast<int>(_ret);
}

void QMediaFormat_setFileFormat(QMediaFormat* self, int f) {
	self->setFileFormat(static_cast<QMediaFormat::FileFormat>(f));
}

void QMediaFormat_setVideoCodec(QMediaFormat* self, int codec) {
	self->setVideoCodec(static_cast<QMediaFormat::VideoCodec>(codec));
}

int QMediaFormat_videoCodec(const QMediaFormat* self) {
	QMediaFormat::VideoCodec _ret = self->videoCodec();
	return static_cast<int>(_ret);
}

void QMediaFormat_setAudioCodec(QMediaFormat* self, int codec) {
	self->setAudioCodec(static_cast<QMediaFormat::AudioCodec>(codec));
}

int QMediaFormat_audioCodec(const QMediaFormat* self) {
	QMediaFormat::AudioCodec _ret = self->audioCodec();
	return static_cast<int>(_ret);
}

bool QMediaFormat_isSupported(const QMediaFormat* self, int mode) {
	return self->isSupported(static_cast<QMediaFormat::ConversionMode>(mode));
}

QMimeType* QMediaFormat_mimeType(const QMediaFormat* self) {
	return new QMimeType(self->mimeType());
}

struct miqt_array /* of int */  QMediaFormat_supportedFileFormats(QMediaFormat* self, int m) {
	QList<QMediaFormat::FileFormat> _ret = self->supportedFileFormats(static_cast<QMediaFormat::ConversionMode>(m));
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QMediaFormat::FileFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QMediaFormat_supportedVideoCodecs(QMediaFormat* self, int m) {
	QList<QMediaFormat::VideoCodec> _ret = self->supportedVideoCodecs(static_cast<QMediaFormat::ConversionMode>(m));
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QMediaFormat::VideoCodec _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of int */  QMediaFormat_supportedAudioCodecs(QMediaFormat* self, int m) {
	QList<QMediaFormat::AudioCodec> _ret = self->supportedAudioCodecs(static_cast<QMediaFormat::ConversionMode>(m));
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QMediaFormat::AudioCodec _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QMediaFormat_fileFormatName(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatName(static_cast<QMediaFormat::FileFormat>(fileFormat));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_audioCodecName(int codec) {
	QString _ret = QMediaFormat::audioCodecName(static_cast<QMediaFormat::AudioCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_videoCodecName(int codec) {
	QString _ret = QMediaFormat::videoCodecName(static_cast<QMediaFormat::VideoCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_fileFormatDescription(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatDescription(static_cast<QMediaFormat::FileFormat>(fileFormat));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_audioCodecDescription(int codec) {
	QString _ret = QMediaFormat::audioCodecDescription(static_cast<QMediaFormat::AudioCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_videoCodecDescription(int codec) {
	QString _ret = QMediaFormat::videoCodecDescription(static_cast<QMediaFormat::VideoCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaFormat_operatorEqual(const QMediaFormat* self, QMediaFormat* other) {
	return (*self == *other);
}

bool QMediaFormat_operatorNotEqual(const QMediaFormat* self, QMediaFormat* other) {
	return (*self != *other);
}

void QMediaFormat_resolveForEncoding(QMediaFormat* self, int flags) {
	self->resolveForEncoding(static_cast<QMediaFormat::ResolveFlags>(flags));
}

void QMediaFormat_delete(QMediaFormat* self) {
	delete self;
}

