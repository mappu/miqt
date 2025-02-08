#include <QCameraFlashControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameraflashcontrol.h>
#include "gen_qcameraflashcontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraFlashControl_flashReady(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraFlashControl_virtbase(QCameraFlashControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraFlashControl_metaObject(const QCameraFlashControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraFlashControl_metacast(QCameraFlashControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraFlashControl_tr(const char* s) {
	QString _ret = QCameraFlashControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_trUtf8(const char* s) {
	QString _ret = QCameraFlashControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraFlashControl_flashMode(const QCameraFlashControl* self) {
	QCameraExposure::FlashModes _ret = self->flashMode();
	return static_cast<int>(_ret);
}

void QCameraFlashControl_setFlashMode(QCameraFlashControl* self, int mode) {
	self->setFlashMode(static_cast<QCameraExposure::FlashModes>(mode));
}

bool QCameraFlashControl_isFlashModeSupported(const QCameraFlashControl* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCameraExposure::FlashModes>(mode));
}

bool QCameraFlashControl_isFlashReady(const QCameraFlashControl* self) {
	return self->isFlashReady();
}

void QCameraFlashControl_flashReady(QCameraFlashControl* self, bool param1) {
	self->flashReady(param1);
}

void QCameraFlashControl_connect_flashReady(QCameraFlashControl* self, intptr_t slot) {
	QCameraFlashControl::connect(self, static_cast<void (QCameraFlashControl::*)(bool)>(&QCameraFlashControl::flashReady), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCameraFlashControl_flashReady(slot, sigval1);
	});
}

struct miqt_string QCameraFlashControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraFlashControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraFlashControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraFlashControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraFlashControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraFlashControl_delete(QCameraFlashControl* self) {
	delete self;
}

