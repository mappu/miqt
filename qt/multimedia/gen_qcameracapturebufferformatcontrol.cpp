#include <QCameraCaptureBufferFormatControl>
#include <QList>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameracapturebufferformatcontrol.h>
#include "gen_qcameracapturebufferformatcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraCaptureBufferFormatControl_bufferFormatChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraCaptureBufferFormatControl_virtbase(QCameraCaptureBufferFormatControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraCaptureBufferFormatControl_metaObject(const QCameraCaptureBufferFormatControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraCaptureBufferFormatControl_metacast(QCameraCaptureBufferFormatControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraCaptureBufferFormatControl_tr(const char* s) {
	QString _ret = QCameraCaptureBufferFormatControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureBufferFormatControl_trUtf8(const char* s) {
	QString _ret = QCameraCaptureBufferFormatControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of int */  QCameraCaptureBufferFormatControl_supportedBufferFormats(const QCameraCaptureBufferFormatControl* self) {
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

int QCameraCaptureBufferFormatControl_bufferFormat(const QCameraCaptureBufferFormatControl* self) {
	QVideoFrame::PixelFormat _ret = self->bufferFormat();
	return static_cast<int>(_ret);
}

void QCameraCaptureBufferFormatControl_setBufferFormat(QCameraCaptureBufferFormatControl* self, int format) {
	self->setBufferFormat(static_cast<QVideoFrame::PixelFormat>(format));
}

void QCameraCaptureBufferFormatControl_bufferFormatChanged(QCameraCaptureBufferFormatControl* self, int format) {
	self->bufferFormatChanged(static_cast<QVideoFrame::PixelFormat>(format));
}

void QCameraCaptureBufferFormatControl_connect_bufferFormatChanged(QCameraCaptureBufferFormatControl* self, intptr_t slot) {
	QCameraCaptureBufferFormatControl::connect(self, static_cast<void (QCameraCaptureBufferFormatControl::*)(QVideoFrame::PixelFormat)>(&QCameraCaptureBufferFormatControl::bufferFormatChanged), self, [=](QVideoFrame::PixelFormat format) {
		QVideoFrame::PixelFormat format_ret = format;
		int sigval1 = static_cast<int>(format_ret);
		miqt_exec_callback_QCameraCaptureBufferFormatControl_bufferFormatChanged(slot, sigval1);
	});
}

struct miqt_string QCameraCaptureBufferFormatControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraCaptureBufferFormatControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureBufferFormatControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraCaptureBufferFormatControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureBufferFormatControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraCaptureBufferFormatControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraCaptureBufferFormatControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraCaptureBufferFormatControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraCaptureBufferFormatControl_delete(QCameraCaptureBufferFormatControl* self) {
	delete self;
}

