#include <QCameraControl>
#include <QMediaControl>
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

void miqt_exec_callback_QCameraControl_StateChanged(intptr_t, int);
void miqt_exec_callback_QCameraControl_StatusChanged(intptr_t, int);
void miqt_exec_callback_QCameraControl_Error(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QCameraControl_CaptureModeChanged(intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

void QCameraControl_virtbase(QCameraControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QCameraControl_MetaObject(const QCameraControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraControl_Metacast(QCameraControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraControl_Tr(const char* s) {
	QString _ret = QCameraControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_TrUtf8(const char* s) {
	QString _ret = QCameraControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCameraControl_State(const QCameraControl* self) {
	QCamera::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QCameraControl_SetState(QCameraControl* self, int state) {
	self->setState(static_cast<QCamera::State>(state));
}

int QCameraControl_Status(const QCameraControl* self) {
	QCamera::Status _ret = self->status();
	return static_cast<int>(_ret);
}

int QCameraControl_CaptureMode(const QCameraControl* self) {
	QCamera::CaptureModes _ret = self->captureMode();
	return static_cast<int>(_ret);
}

void QCameraControl_SetCaptureMode(QCameraControl* self, int captureMode) {
	self->setCaptureMode(static_cast<QCamera::CaptureModes>(captureMode));
}

bool QCameraControl_IsCaptureModeSupported(const QCameraControl* self, int mode) {
	return self->isCaptureModeSupported(static_cast<QCamera::CaptureModes>(mode));
}

bool QCameraControl_CanChangeProperty(const QCameraControl* self, int changeType, int status) {
	return self->canChangeProperty(static_cast<QCameraControl::PropertyChangeType>(changeType), static_cast<QCamera::Status>(status));
}

void QCameraControl_StateChanged(QCameraControl* self, int param1) {
	self->stateChanged(static_cast<QCamera::State>(param1));
}

void QCameraControl_connect_StateChanged(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(QCamera::State)>(&QCameraControl::stateChanged), self, [=](QCamera::State param1) {
		QCamera::State param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCameraControl_StateChanged(slot, sigval1);
	});
}

void QCameraControl_StatusChanged(QCameraControl* self, int param1) {
	self->statusChanged(static_cast<QCamera::Status>(param1));
}

void QCameraControl_connect_StatusChanged(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(QCamera::Status)>(&QCameraControl::statusChanged), self, [=](QCamera::Status param1) {
		QCamera::Status param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QCameraControl_StatusChanged(slot, sigval1);
	});
}

void QCameraControl_Error(QCameraControl* self, int error, struct miqt_string errorString) {
	QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self->error(static_cast<int>(error), errorString_QString);
}

void QCameraControl_connect_Error(QCameraControl* self, intptr_t slot) {
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
		miqt_exec_callback_QCameraControl_Error(slot, sigval1, sigval2);
	});
}

void QCameraControl_CaptureModeChanged(QCameraControl* self, int mode) {
	self->captureModeChanged(static_cast<QCamera::CaptureModes>(mode));
}

void QCameraControl_connect_CaptureModeChanged(QCameraControl* self, intptr_t slot) {
	QCameraControl::connect(self, static_cast<void (QCameraControl::*)(QCamera::CaptureModes)>(&QCameraControl::captureModeChanged), self, [=](QCamera::CaptureModes mode) {
		QCamera::CaptureModes mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		miqt_exec_callback_QCameraControl_CaptureModeChanged(slot, sigval1);
	});
}

struct miqt_string QCameraControl_Tr2(const char* s, const char* c) {
	QString _ret = QCameraControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QCameraControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCameraControl_Delete(QCameraControl* self) {
	delete self;
}

