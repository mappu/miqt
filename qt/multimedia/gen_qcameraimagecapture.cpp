#include <QCameraImageCapture>
#include <QImage>
#include <QImageEncoderSettings>
#include <QList>
#include <QMediaObject>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVideoFrame>
#include <qcameraimagecapture.h>
#include "gen_qcameraimagecapture.h"
#include "_cgo_export.h"

QCameraImageCapture* QCameraImageCapture_new(QMediaObject* mediaObject) {
	return new QCameraImageCapture(mediaObject);
}

QCameraImageCapture* QCameraImageCapture_new2(QMediaObject* mediaObject, QObject* parent) {
	return new QCameraImageCapture(mediaObject, parent);
}

QMetaObject* QCameraImageCapture_MetaObject(const QCameraImageCapture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraImageCapture_Metacast(QCameraImageCapture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraImageCapture_Tr(const char* s) {
	QString _ret = QCameraImageCapture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCapture_TrUtf8(const char* s) {
	QString _ret = QCameraImageCapture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageCapture_IsAvailable(const QCameraImageCapture* self) {
	return self->isAvailable();
}

int QCameraImageCapture_Availability(const QCameraImageCapture* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

QMediaObject* QCameraImageCapture_MediaObject(const QCameraImageCapture* self) {
	return self->mediaObject();
}

int QCameraImageCapture_Error(const QCameraImageCapture* self) {
	QCameraImageCapture::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QCameraImageCapture_ErrorString(const QCameraImageCapture* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageCapture_IsReadyForCapture(const QCameraImageCapture* self) {
	return self->isReadyForCapture();
}

struct miqt_array QCameraImageCapture_SupportedImageCodecs(const QCameraImageCapture* self) {
	QStringList _ret = self->supportedImageCodecs();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QCameraImageCapture_ImageCodecDescription(const QCameraImageCapture* self, struct miqt_string codecName) {
	QString codecName_QString = QString::fromUtf8(codecName.data, codecName.len);
	QString _ret = self->imageCodecDescription(codecName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QCameraImageCapture_SupportedResolutions(const QCameraImageCapture* self) {
	QList<QSize> _ret = self->supportedResolutions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QImageEncoderSettings* QCameraImageCapture_EncodingSettings(const QCameraImageCapture* self) {
	return new QImageEncoderSettings(self->encodingSettings());
}

void QCameraImageCapture_SetEncodingSettings(QCameraImageCapture* self, QImageEncoderSettings* settings) {
	self->setEncodingSettings(*settings);
}

struct miqt_array QCameraImageCapture_SupportedBufferFormats(const QCameraImageCapture* self) {
	QList<QVideoFrame::PixelFormat> _ret = self->supportedBufferFormats();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QVideoFrame::PixelFormat _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QCameraImageCapture_BufferFormat(const QCameraImageCapture* self) {
	QVideoFrame::PixelFormat _ret = self->bufferFormat();
	return static_cast<int>(_ret);
}

void QCameraImageCapture_SetBufferFormat(QCameraImageCapture* self, int format) {
	self->setBufferFormat(static_cast<const QVideoFrame::PixelFormat>(format));
}

bool QCameraImageCapture_IsCaptureDestinationSupported(const QCameraImageCapture* self, int destination) {
	return self->isCaptureDestinationSupported(static_cast<QCameraImageCapture::CaptureDestinations>(destination));
}

int QCameraImageCapture_CaptureDestination(const QCameraImageCapture* self) {
	QCameraImageCapture::CaptureDestinations _ret = self->captureDestination();
	return static_cast<int>(_ret);
}

void QCameraImageCapture_SetCaptureDestination(QCameraImageCapture* self, int destination) {
	self->setCaptureDestination(static_cast<QCameraImageCapture::CaptureDestinations>(destination));
}

int QCameraImageCapture_Capture(QCameraImageCapture* self) {
	return self->capture();
}

void QCameraImageCapture_CancelCapture(QCameraImageCapture* self) {
	self->cancelCapture();
}

void QCameraImageCapture_Error2(QCameraImageCapture* self, int id, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(id), static_cast<QCameraImageCapture::Error>(error), errorString_QString);
}

void QCameraImageCapture_connect_Error2(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(int, QCameraImageCapture::Error, const QString&)>(&QCameraImageCapture::error), self, [=](int id, QCameraImageCapture::Error error, const QString& errorString) {
		int sigval1 = id;
		QCameraImageCapture::Error error_ret = error;
		int sigval2 = static_cast<int>(error_ret);
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval3 = errorString_ms;
		miqt_exec_callback_QCameraImageCapture_Error2(slot, sigval1, sigval2, sigval3);
	});
}

void QCameraImageCapture_ReadyForCaptureChanged(QCameraImageCapture* self, bool ready) {
	self->readyForCaptureChanged(ready);
}

void QCameraImageCapture_connect_ReadyForCaptureChanged(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(bool)>(&QCameraImageCapture::readyForCaptureChanged), self, [=](bool ready) {
		bool sigval1 = ready;
		miqt_exec_callback_QCameraImageCapture_ReadyForCaptureChanged(slot, sigval1);
	});
}

void QCameraImageCapture_BufferFormatChanged(QCameraImageCapture* self, int format) {
	self->bufferFormatChanged(static_cast<QVideoFrame::PixelFormat>(format));
}

void QCameraImageCapture_connect_BufferFormatChanged(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(QVideoFrame::PixelFormat)>(&QCameraImageCapture::bufferFormatChanged), self, [=](QVideoFrame::PixelFormat format) {
		QVideoFrame::PixelFormat format_ret = format;
		int sigval1 = static_cast<int>(format_ret);
		miqt_exec_callback_QCameraImageCapture_BufferFormatChanged(slot, sigval1);
	});
}

void QCameraImageCapture_CaptureDestinationChanged(QCameraImageCapture* self, int destination) {
	self->captureDestinationChanged(static_cast<QCameraImageCapture::CaptureDestinations>(destination));
}

void QCameraImageCapture_connect_CaptureDestinationChanged(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(QCameraImageCapture::CaptureDestinations)>(&QCameraImageCapture::captureDestinationChanged), self, [=](QCameraImageCapture::CaptureDestinations destination) {
		QCameraImageCapture::CaptureDestinations destination_ret = destination;
		int sigval1 = static_cast<int>(destination_ret);
		miqt_exec_callback_QCameraImageCapture_CaptureDestinationChanged(slot, sigval1);
	});
}

void QCameraImageCapture_ImageExposed(QCameraImageCapture* self, int id) {
	self->imageExposed(static_cast<int>(id));
}

void QCameraImageCapture_connect_ImageExposed(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(int)>(&QCameraImageCapture::imageExposed), self, [=](int id) {
		int sigval1 = id;
		miqt_exec_callback_QCameraImageCapture_ImageExposed(slot, sigval1);
	});
}

void QCameraImageCapture_ImageCaptured(QCameraImageCapture* self, int id, QImage* preview) {
	self->imageCaptured(static_cast<int>(id), *preview);
}

void QCameraImageCapture_connect_ImageCaptured(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(int, const QImage&)>(&QCameraImageCapture::imageCaptured), self, [=](int id, const QImage& preview) {
		int sigval1 = id;
		const QImage& preview_ret = preview;
		// Cast returned reference into pointer
		QImage* sigval2 = const_cast<QImage*>(&preview_ret);
		miqt_exec_callback_QCameraImageCapture_ImageCaptured(slot, sigval1, sigval2);
	});
}

void QCameraImageCapture_ImageMetadataAvailable(QCameraImageCapture* self, int id, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->imageMetadataAvailable(static_cast<int>(id), key_QString, *value);
}

void QCameraImageCapture_connect_ImageMetadataAvailable(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(int, const QString&, const QVariant&)>(&QCameraImageCapture::imageMetadataAvailable), self, [=](int id, const QString& key, const QVariant& value) {
		int sigval1 = id;
		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval2 = key_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QCameraImageCapture_ImageMetadataAvailable(slot, sigval1, sigval2, sigval3);
	});
}

void QCameraImageCapture_ImageAvailable(QCameraImageCapture* self, int id, QVideoFrame* frame) {
	self->imageAvailable(static_cast<int>(id), *frame);
}

void QCameraImageCapture_connect_ImageAvailable(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(int, const QVideoFrame&)>(&QCameraImageCapture::imageAvailable), self, [=](int id, const QVideoFrame& frame) {
		int sigval1 = id;
		const QVideoFrame& frame_ret = frame;
		// Cast returned reference into pointer
		QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&frame_ret);
		miqt_exec_callback_QCameraImageCapture_ImageAvailable(slot, sigval1, sigval2);
	});
}

void QCameraImageCapture_ImageSaved(QCameraImageCapture* self, int id, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->imageSaved(static_cast<int>(id), fileName_QString);
}

void QCameraImageCapture_connect_ImageSaved(QCameraImageCapture* self, intptr_t slot) {
	QCameraImageCapture::connect(self, static_cast<void (QCameraImageCapture::*)(int, const QString&)>(&QCameraImageCapture::imageSaved), self, [=](int id, const QString& fileName) {
		int sigval1 = id;
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval2 = fileName_ms;
		miqt_exec_callback_QCameraImageCapture_ImageSaved(slot, sigval1, sigval2);
	});
}

struct miqt_string QCameraImageCapture_Tr2(const char* s, const char* c) {
	QString _ret = QCameraImageCapture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCapture_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraImageCapture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCapture_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraImageCapture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCapture_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraImageCapture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QCameraImageCapture_SupportedResolutions1(const QCameraImageCapture* self, QImageEncoderSettings* settings) {
	QList<QSize> _ret = self->supportedResolutions(*settings);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QCameraImageCapture_SupportedResolutions2(const QCameraImageCapture* self, QImageEncoderSettings* settings, bool* continuous) {
	QList<QSize> _ret = self->supportedResolutions(*settings, continuous);
	// Convert QList<> from C++ memory to manually-managed C memory
	QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSize(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QCameraImageCapture_Capture1(QCameraImageCapture* self, struct miqt_string location) {
	QString location_QString = QString::fromUtf8(location.data, location.len);
	return self->capture(location_QString);
}

void QCameraImageCapture_Delete(QCameraImageCapture* self) {
	delete self;
}

