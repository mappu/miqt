#include <QCameraImageCaptureControl>
#include <QImage>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QVideoFrame>
#include <qcameraimagecapturecontrol.h>
#include "gen_qcameraimagecapturecontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraImageCaptureControl_readyForCaptureChanged(intptr_t, bool);
void miqt_exec_callback_QCameraImageCaptureControl_imageExposed(intptr_t, int);
void miqt_exec_callback_QCameraImageCaptureControl_imageCaptured(intptr_t, int, QImage*);
void miqt_exec_callback_QCameraImageCaptureControl_imageMetadataAvailable(intptr_t, int, struct miqt_string, QVariant*);
void miqt_exec_callback_QCameraImageCaptureControl_imageAvailable(intptr_t, int, QVideoFrame*);
void miqt_exec_callback_QCameraImageCaptureControl_imageSaved(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QCameraImageCaptureControl_error(intptr_t, int, int, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraImageCaptureControl_virtbase(QCameraImageCaptureControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraImageCaptureControl_metaObject(const QCameraImageCaptureControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraImageCaptureControl_metacast(QCameraImageCaptureControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraImageCaptureControl_tr(const char* s) {
	QString _ret = QCameraImageCaptureControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCaptureControl_trUtf8(const char* s) {
	QString _ret = QCameraImageCaptureControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraImageCaptureControl_isReadyForCapture(const QCameraImageCaptureControl* self) {
	return self->isReadyForCapture();
}

int QCameraImageCaptureControl_driveMode(const QCameraImageCaptureControl* self) {
	QCameraImageCapture::DriveMode _ret = self->driveMode();
	return static_cast<int>(_ret);
}

void QCameraImageCaptureControl_setDriveMode(QCameraImageCaptureControl* self, int mode) {
	self->setDriveMode(static_cast<QCameraImageCapture::DriveMode>(mode));
}

int QCameraImageCaptureControl_capture(QCameraImageCaptureControl* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->capture(fileName_QString);
}

void QCameraImageCaptureControl_cancelCapture(QCameraImageCaptureControl* self) {
	self->cancelCapture();
}

void QCameraImageCaptureControl_readyForCaptureChanged(QCameraImageCaptureControl* self, bool ready) {
	self->readyForCaptureChanged(ready);
}

void QCameraImageCaptureControl_connect_readyForCaptureChanged(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(bool)>(&QCameraImageCaptureControl::readyForCaptureChanged), self, [=](bool ready) {
		bool sigval1 = ready;
		miqt_exec_callback_QCameraImageCaptureControl_readyForCaptureChanged(slot, sigval1);
	});
}

void QCameraImageCaptureControl_imageExposed(QCameraImageCaptureControl* self, int requestId) {
	self->imageExposed(static_cast<int>(requestId));
}

void QCameraImageCaptureControl_connect_imageExposed(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(int)>(&QCameraImageCaptureControl::imageExposed), self, [=](int requestId) {
		int sigval1 = requestId;
		miqt_exec_callback_QCameraImageCaptureControl_imageExposed(slot, sigval1);
	});
}

void QCameraImageCaptureControl_imageCaptured(QCameraImageCaptureControl* self, int requestId, QImage* preview) {
	self->imageCaptured(static_cast<int>(requestId), *preview);
}

void QCameraImageCaptureControl_connect_imageCaptured(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(int, const QImage&)>(&QCameraImageCaptureControl::imageCaptured), self, [=](int requestId, const QImage& preview) {
		int sigval1 = requestId;
		const QImage& preview_ret = preview;
		// Cast returned reference into pointer
		QImage* sigval2 = const_cast<QImage*>(&preview_ret);
		miqt_exec_callback_QCameraImageCaptureControl_imageCaptured(slot, sigval1, sigval2);
	});
}

void QCameraImageCaptureControl_imageMetadataAvailable(QCameraImageCaptureControl* self, int id, struct miqt_string key, QVariant* value) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	self->imageMetadataAvailable(static_cast<int>(id), key_QString, *value);
}

void QCameraImageCaptureControl_connect_imageMetadataAvailable(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(int, const QString&, const QVariant&)>(&QCameraImageCaptureControl::imageMetadataAvailable), self, [=](int id, const QString& key, const QVariant& value) {
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
		miqt_exec_callback_QCameraImageCaptureControl_imageMetadataAvailable(slot, sigval1, sigval2, sigval3);
	});
}

void QCameraImageCaptureControl_imageAvailable(QCameraImageCaptureControl* self, int requestId, QVideoFrame* buffer) {
	self->imageAvailable(static_cast<int>(requestId), *buffer);
}

void QCameraImageCaptureControl_connect_imageAvailable(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(int, const QVideoFrame&)>(&QCameraImageCaptureControl::imageAvailable), self, [=](int requestId, const QVideoFrame& buffer) {
		int sigval1 = requestId;
		const QVideoFrame& buffer_ret = buffer;
		// Cast returned reference into pointer
		QVideoFrame* sigval2 = const_cast<QVideoFrame*>(&buffer_ret);
		miqt_exec_callback_QCameraImageCaptureControl_imageAvailable(slot, sigval1, sigval2);
	});
}

void QCameraImageCaptureControl_imageSaved(QCameraImageCaptureControl* self, int requestId, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->imageSaved(static_cast<int>(requestId), fileName_QString);
}

void QCameraImageCaptureControl_connect_imageSaved(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(int, const QString&)>(&QCameraImageCaptureControl::imageSaved), self, [=](int requestId, const QString& fileName) {
		int sigval1 = requestId;
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval2 = fileName_ms;
		miqt_exec_callback_QCameraImageCaptureControl_imageSaved(slot, sigval1, sigval2);
	});
}

void QCameraImageCaptureControl_error(QCameraImageCaptureControl* self, int id, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(id), static_cast<int>(error), errorString_QString);
}

void QCameraImageCaptureControl_connect_error(QCameraImageCaptureControl* self, intptr_t slot) {
	QCameraImageCaptureControl::connect(self, static_cast<void (QCameraImageCaptureControl::*)(int, int, const QString&)>(&QCameraImageCaptureControl::error), self, [=](int id, int error, const QString& errorString) {
		int sigval1 = id;
		int sigval2 = error;
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval3 = errorString_ms;
		miqt_exec_callback_QCameraImageCaptureControl_error(slot, sigval1, sigval2, sigval3);
	});
}

struct miqt_string QCameraImageCaptureControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraImageCaptureControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCaptureControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraImageCaptureControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCaptureControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraImageCaptureControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraImageCaptureControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraImageCaptureControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraImageCaptureControl_delete(QCameraImageCaptureControl* self) {
	delete self;
}

