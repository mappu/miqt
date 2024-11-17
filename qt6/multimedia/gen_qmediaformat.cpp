#include <QList>
#include <QMediaFormat>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaformat.h>
#include "gen_qmediaformat.h"
#include "_cgo_export.h"

QMediaFormat* QMediaFormat_new() {
	return new QMediaFormat();
}

QMediaFormat* QMediaFormat_new2(QMediaFormat* other) {
	return new QMediaFormat(*other);
}

QMediaFormat* QMediaFormat_new3(int format) {
	return new QMediaFormat(static_cast<QMediaFormat::FileFormat>(format));
}

void QMediaFormat_OperatorAssign(QMediaFormat* self, QMediaFormat* other) {
	self->operator=(*other);
}

void QMediaFormat_Swap(QMediaFormat* self, QMediaFormat* other) {
	self->swap(*other);
}

int QMediaFormat_FileFormat(const QMediaFormat* self) {
	QMediaFormat::FileFormat _ret = self->fileFormat();
	return static_cast<int>(_ret);
}

void QMediaFormat_SetFileFormat(QMediaFormat* self, int f) {
	self->setFileFormat(static_cast<QMediaFormat::FileFormat>(f));
}

void QMediaFormat_SetVideoCodec(QMediaFormat* self, int codec) {
	self->setVideoCodec(static_cast<QMediaFormat::VideoCodec>(codec));
}

int QMediaFormat_VideoCodec(const QMediaFormat* self) {
	QMediaFormat::VideoCodec _ret = self->videoCodec();
	return static_cast<int>(_ret);
}

void QMediaFormat_SetAudioCodec(QMediaFormat* self, int codec) {
	self->setAudioCodec(static_cast<QMediaFormat::AudioCodec>(codec));
}

int QMediaFormat_AudioCodec(const QMediaFormat* self) {
	QMediaFormat::AudioCodec _ret = self->audioCodec();
	return static_cast<int>(_ret);
}

bool QMediaFormat_IsSupported(const QMediaFormat* self, int mode) {
	return self->isSupported(static_cast<QMediaFormat::ConversionMode>(mode));
}

QMimeType* QMediaFormat_MimeType(const QMediaFormat* self) {
	return new QMimeType(self->mimeType());
}

struct miqt_array /* of int */  QMediaFormat_SupportedFileFormats(QMediaFormat* self, int m) {
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

struct miqt_array /* of int */  QMediaFormat_SupportedVideoCodecs(QMediaFormat* self, int m) {
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

struct miqt_array /* of int */  QMediaFormat_SupportedAudioCodecs(QMediaFormat* self, int m) {
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

struct miqt_string QMediaFormat_FileFormatName(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatName(static_cast<QMediaFormat::FileFormat>(fileFormat));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_AudioCodecName(int codec) {
	QString _ret = QMediaFormat::audioCodecName(static_cast<QMediaFormat::AudioCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_VideoCodecName(int codec) {
	QString _ret = QMediaFormat::videoCodecName(static_cast<QMediaFormat::VideoCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_FileFormatDescription(int fileFormat) {
	QString _ret = QMediaFormat::fileFormatDescription(static_cast<QMediaFormat::FileFormat>(fileFormat));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_AudioCodecDescription(int codec) {
	QString _ret = QMediaFormat::audioCodecDescription(static_cast<QMediaFormat::AudioCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaFormat_VideoCodecDescription(int codec) {
	QString _ret = QMediaFormat::videoCodecDescription(static_cast<QMediaFormat::VideoCodec>(codec));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaFormat_OperatorEqual(const QMediaFormat* self, QMediaFormat* other) {
	return self->operator==(*other);
}

bool QMediaFormat_OperatorNotEqual(const QMediaFormat* self, QMediaFormat* other) {
	return self->operator!=(*other);
}

void QMediaFormat_ResolveForEncoding(QMediaFormat* self, int flags) {
	self->resolveForEncoding(static_cast<QMediaFormat::ResolveFlags>(flags));
}

void QMediaFormat_Delete(QMediaFormat* self) {
	delete self;
}

