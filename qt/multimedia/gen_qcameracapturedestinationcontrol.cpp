#include <QCameraCaptureDestinationControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameracapturedestinationcontrol.h>
#include "gen_qcameracapturedestinationcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraCaptureDestinationControl_captureDestinationChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraCaptureDestinationControl_virtbase(QCameraCaptureDestinationControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraCaptureDestinationControl_metaObject(const QCameraCaptureDestinationControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraCaptureDestinationControl_metacast(QCameraCaptureDestinationControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraCaptureDestinationControl_tr(const char* s) {
	QString _ret = QCameraCaptureDestinationControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureDestinationControl_trUtf8(const char* s) {
	QString _ret = QCameraCaptureDestinationControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraCaptureDestinationControl_isCaptureDestinationSupported(const QCameraCaptureDestinationControl* self, int destination) {
	return self->isCaptureDestinationSupported(static_cast<QCameraImageCapture::CaptureDestinations>(destination));
}

int QCameraCaptureDestinationControl_captureDestination(const QCameraCaptureDestinationControl* self) {
	QCameraImageCapture::CaptureDestinations _ret = self->captureDestination();
	return static_cast<int>(_ret);
}

void QCameraCaptureDestinationControl_setCaptureDestination(QCameraCaptureDestinationControl* self, int destination) {
	self->setCaptureDestination(static_cast<QCameraImageCapture::CaptureDestinations>(destination));
}

void QCameraCaptureDestinationControl_captureDestinationChanged(QCameraCaptureDestinationControl* self, int destination) {
	self->captureDestinationChanged(static_cast<QCameraImageCapture::CaptureDestinations>(destination));
}

void QCameraCaptureDestinationControl_connect_captureDestinationChanged(QCameraCaptureDestinationControl* self, intptr_t slot) {
	QCameraCaptureDestinationControl::connect(self, static_cast<void (QCameraCaptureDestinationControl::*)(QCameraImageCapture::CaptureDestinations)>(&QCameraCaptureDestinationControl::captureDestinationChanged), self, [=](QCameraImageCapture::CaptureDestinations destination) {
		QCameraImageCapture::CaptureDestinations destination_ret = destination;
		int sigval1 = static_cast<int>(destination_ret);
		miqt_exec_callback_QCameraCaptureDestinationControl_captureDestinationChanged(slot, sigval1);
	});
}

struct miqt_string QCameraCaptureDestinationControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraCaptureDestinationControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureDestinationControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraCaptureDestinationControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureDestinationControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraCaptureDestinationControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureDestinationControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraCaptureDestinationControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraCaptureDestinationControl_delete(QCameraCaptureDestinationControl* self) {
	delete self;
}

