#include <QCameraFlashControl>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameraflashcontrol.h>
#include "gen_qcameraflashcontrol.h"
#include "_cgo_export.h"

QMetaObject* QCameraFlashControl_MetaObject(const QCameraFlashControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraFlashControl_Metacast(QCameraFlashControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraFlashControl_Tr(const char* s) {
	QString _ret = QCameraFlashControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_TrUtf8(const char* s) {
	QString _ret = QCameraFlashControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraFlashControl_FlashMode(const QCameraFlashControl* self) {
	QCameraExposure::FlashModes _ret = self->flashMode();
	return static_cast<int>(_ret);
}

void QCameraFlashControl_SetFlashMode(QCameraFlashControl* self, int mode) {
	self->setFlashMode(static_cast<QCameraExposure::FlashModes>(mode));
}

bool QCameraFlashControl_IsFlashModeSupported(const QCameraFlashControl* self, int mode) {
	return self->isFlashModeSupported(static_cast<QCameraExposure::FlashModes>(mode));
}

bool QCameraFlashControl_IsFlashReady(const QCameraFlashControl* self) {
	return self->isFlashReady();
}

void QCameraFlashControl_FlashReady(QCameraFlashControl* self, bool param1) {
	self->flashReady(param1);
}

void QCameraFlashControl_connect_FlashReady(QCameraFlashControl* self, intptr_t slot) {
	QCameraFlashControl::connect(self, static_cast<void (QCameraFlashControl::*)(bool)>(&QCameraFlashControl::flashReady), self, [=](bool param1) {
		bool sigval1 = param1;
		miqt_exec_callback_QCameraFlashControl_FlashReady(slot, sigval1);
	});
}

struct miqt_string QCameraFlashControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraFlashControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraFlashControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraFlashControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraFlashControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraFlashControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraFlashControl_Delete(QCameraFlashControl* self) {
	delete self;
}

