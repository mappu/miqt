#include <QCameraControl>
#include <QMediaControl>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcameracontrol.h>
#include "gen_qcameracontrol.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCameraControl_stateChanged(intptr_t, int);
void miqt_exec_callback_QCameraControl_statusChanged(intptr_t, int);
void miqt_exec_callback_QCameraControl_error(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QCameraControl_captureModeChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraControl_virtbase(QCameraControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraControl_metaObject(const QCameraControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraControl_metacast(QCameraControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraControl_tr(const char* s) {
	QString _ret = QCameraControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_trUtf8(const char* s) {
	QString _ret = QCameraControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraControl_state(const QCameraControl* self) {
	QCamera::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QCameraControl_setState(QCameraControl* self, int state) {
	self->setState(static_cast<QCamera::State>(state));
}

int QCameraControl_status(const QCameraControl* self) {
	QCamera::Status _ret = self->status();
	return static_cast<int>(_ret);
}

int QCameraControl_captureMode(const QCameraControl* self) {
	QCamera::CaptureModes _ret = self->captureMode();
	return static_cast<int>(_ret);
}

void QCameraControl_setCaptureMode(QCameraControl* self, int captureMode) {
	self->setCaptureMode(static_cast<QCamera::CaptureModes>(captureMode));
}

bool QCameraControl_isCaptureModeSupported(const QCameraControl* self, int mode) {
	return self->isCaptureModeSupported(static_cast<QCamera::CaptureModes>(mode));
}

bool QCameraControl_canChangeProperty(const QCameraControl* self, int changeType, int status) {
	return self->canChangeProperty(static_cast<QCameraControl::PropertyChangeType>(changeType), static_cast<QCamera::Status>(status));
}

void QCameraControl_stateChanged(QCameraControl* self, int param1) {
	self->stateChanged(static_cast<QCamera::State>(param1));
}

void QCameraControl_connect_stateChanged(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(QCamera::State)>(&QCameraControl::stateChanged), self, [=](QCamera::State param1) {
		QCamera::State param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCameraControl_stateChanged(slot, sigval1);
	});
}

void QCameraControl_statusChanged(QCameraControl* self, int param1) {
	self->statusChanged(static_cast<QCamera::Status>(param1));
}

void QCameraControl_connect_statusChanged(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(QCamera::Status)>(&QCameraControl::statusChanged), self, [=](QCamera::Status param1) {
		QCamera::Status param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCameraControl_statusChanged(slot, sigval1);
	});
}

void QCameraControl_error(QCameraControl* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(error), errorString_QString);
}

void QCameraControl_connect_error(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(int, const QString&)>(&QCameraControl::error), self, [=](int error, const QString& errorString) {
		int sigval1 = error;
		const QString errorString_ret = errorString;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray errorString_b = errorString_ret.toUtf8();
		struct miqt_string errorString_ms;
		errorString_ms.len = errorString_b.length();
		errorString_ms.data = static_cast<char*>(malloc(errorString_ms.len));
		memcpy(errorString_ms.data, errorString_b.data(), errorString_ms.len);
		struct miqt_string sigval2 = errorString_ms;
		miqt_exec_callback_QCameraControl_error(slot, sigval1, sigval2);
	});
}

void QCameraControl_captureModeChanged(QCameraControl* self, int mode) {
	self->captureModeChanged(static_cast<QCamera::CaptureModes>(mode));
}

void QCameraControl_connect_captureModeChanged(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(QCamera::CaptureModes)>(&QCameraControl::captureModeChanged), self, [=](QCamera::CaptureModes mode) {
		QCamera::CaptureModes mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QCameraControl_captureModeChanged(slot, sigval1);
	});
}

struct miqt_string QCameraControl_tr2(const char* s, const char* c) {
	QString _ret = QCameraControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraControl_delete(QCameraControl* self) {
	delete self;
}

